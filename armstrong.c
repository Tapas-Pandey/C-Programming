#include <stdio.h>

int main()
{
  int n, o, r, result = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  o = n;

  while (n != 0)
  {
    r = n % 10;
    result += r * r * r;
    n /= 10;
  }

  if (result == o)
  {
    printf("%d is an Armstrong number.\n", o);
  }
  else
  {
    printf("%d is not an Armstrong number.\n", o);
  }
  return 0;
}
