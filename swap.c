#include<stdio.h>
int main()
{
  int a,b;
  printf("\n Enter 2 numbers:");
  scanf("%d %d",&a,&b);
  printf("\n The numbers before swapping are %d,%d",a,b);
  a=a*b;
  b=a/b;
  a=a/b;
  printf("\n The numbers after swapping are %d,%d",a,b);
  return 0;
}
