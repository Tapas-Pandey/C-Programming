
#include <stdio.h>

int main()
{
  int n, c = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n != 0)
  {
    n /= 10;
    c++;
  }
  printf("Number of digits: %d\n", c);
  return 0;
}
