#include <stdio.h>

int main()
{
  int n, t1 = 0, t2 = 1, t3;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d", t1, t2);
  for (int i = 1; i <= n - 2; i++)
  {
    t3 = t1 + t2;
    printf(", %d", t3);
    t1 = t2;
    t2 = t3;
  }
  printf("\n");
  return 0;
}
