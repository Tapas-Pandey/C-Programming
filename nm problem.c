#include <stdio.h>

int main()
{
  int n, m, output = 1;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Enter the value of m: ");
  scanf("%d", &m);

  for (int i = 0; i < m; i++)
  {
    output *= n;
  }

  printf("%d^%d = %d\n", n, m, output);

  return 0;
}
