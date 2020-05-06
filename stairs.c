#include<stdio.h>
int main()
{
	int n,i,j;
	printf("\n Enter the number of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*(i+1);j++)
		{
			if(j%2==0)
			    printf("%d",0);
			else
			    printf("%d",1);
		}
		printf("\n");
	}
	return 0;
}
