#include <stdio.h>

int main()
{
  int es = 0, os = 0;

  for (int i = 0; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      es += i;
    }
    else
    {
      os += i;
    }
  }

  printf("Sum of all even numbers from 0 to 100 = %d\n", es);
  printf("Sum of all odd numbers from 0 to 100 = %d\n", os);

  return 0;
}
