#include <stdio.h>

int main()
{
  int n;
  int factorial;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++)
  {
    factorial = 1;
    for (int j = 1; j <= i; j++)
    {
      factorial *= j;
    }
    printf("Factorial of %d = %d\n", i, factorial);
  }

  return 0;
}
