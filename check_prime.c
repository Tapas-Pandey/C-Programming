#include <stdio.h>

int main()
{
  int n, p = 1;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n <= 1)
  {
    p = 0;
  }
  else
  {
    for (int i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
      {
        p = 0;
        break;
      }
    }
  }

  if (p)
  {
    printf("%d is a prime number.\n", n);
  }
  else
  {
    printf("%d is not a prime number.\n", n);
  }
  return 0;
}
