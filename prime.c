#include<stdio.h>
int prime(int n,int i);
int main()
{
	int a,p;
	printf("\n Enter a number:");
	scanf("%d",&a);
	p=prime(a,2);
	if(p==1)
	    printf("\n %d is a prime number",a);
	else
	    printf("\n %d is not a prime number",a);
	return 0;
}
int prime(int n,int i)
{
	if(i>(n/2))
	       return 1; 
	if(n%i==0)
	      return 0;
	else
	    return prime(n,i+1);
}
