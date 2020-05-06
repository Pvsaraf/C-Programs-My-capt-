#include<stdio.h>
int sum(int n);
int main()
{
	int a,s;
	printf("\n Enter a number whose sum of digits is to be found:");
	scanf("%d",&a);
	s=sum(a);
	printf("\n The sum of digits of the number %d is %d",a,s);
	return 0;
}
int sum(int n)
{
	if(n==0)
	          return 0;
	else
	{
		return (n%10+sum(n/10));
	}
}
