#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d", &num);
  int r, sum = 0;
  while (num > 0)
  {
    r = num % 10;
    sum = sum + r;
    num = num / 10;
  }
  printf("%d", sum);
}
