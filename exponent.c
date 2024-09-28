#include <stdio.h>

int main()
{
  int b, e, n = 1;
  printf("Enter base and exponent: ");
  scanf("%d %d", &b, &e);

  for (int i = 1; i <= e; i++)
  {
    n *= b;
  }
  printf("%d ^ %d is: %d\n", b, e, n);
  return 0;
}
