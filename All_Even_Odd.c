#include <stdio.h>

int main()
{
  printf("EVEN numbers\n");
  for (int i = 0; i <= 100; i += 2)
  {
    printf("%d ", i);
  }

  printf("\nODD numbers\n");

  for (int i = 1; i <= 100; i += 2)
  {
    printf("%d ", i);
  }

  printf("\n");
  return 0;
}
