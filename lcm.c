#include<stdio.h>
int lcm(int n1,int n2);
int main()
{
	int n1,n2;
	printf("\n Enter 2 numbers:");
	scanf("%d %d",&n1,&n2);
	printf("\n The LCM of %d and %d is %d",n1,n2,lcm(n1,n2));
	return 0;
}
int lcm(int n1,int n2)
{
	static int sum=0;
	sum+=n1;
	if((sum%n1==0)&&(sum%n2==0))
	        return sum;
	else
	        return lcm(n1,n2);
}
