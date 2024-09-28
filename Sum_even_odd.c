
#include <stdio.h>

int main()
{
  int sumEven = 0, sumOdd = 0;

  for (int i = 1; i < 100; i++)
  {
    if (i % 2 == 0)
    {
      sumEven += i;
    }
    else
    {
      sumOdd += i;
    }
  }
  printf("Sum of even numbers: %d\n", sumEven);
  printf("Sum of odd numbers: %d\n", sumOdd);
  return 0;
}
