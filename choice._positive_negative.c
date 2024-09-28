#include <stdio.h>

int main()
{
  int num, p = 0, n = 0, z = 0, c;

  do
  {
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
      p++;
    }
    else if (num < 0)
    {
      n++;
    }
    else
    {
      z++;
    }

    printf("Do you want to enter another number? (1 for Yes / 0 for No): ");
    scanf("%d", &c);
  } while (c == 1);

  printf("Positive numbers: %d\n", p);
  printf("Negative numbers: %d\n", n);
  printf("Zeros: %d\n", z);
  return 0;
}
