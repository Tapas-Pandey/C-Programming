#include <stdio.h>

int main()
{
  int sum = 0;
  int prime;

  for (int i = 2; i <= 100; i++)
  {
    prime = 1;
    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        prime = 0;
        break;
      }
    }

    if (prime)
    {
      printf("%d ", i);
      sum += i;
    }
  }

  printf("\nSum of prime numbers from 0 to 100 = %d\n", sum);
  return 0;
}
