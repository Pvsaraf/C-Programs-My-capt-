#include<stdio.h>
int main()
{
	int M[3][3],i,j,sum=0;
	int *p;
	for(i=0;i<3;i++)
	{
		p=&M[i][0];
		for(j=0;j<3;j++)
		{
			printf("\n Enter the element:");
			scanf("%d",(p+j));
		}
	}
	for(i=0;i<3;i++)
	{
		p=&M[i][0];
		for(j=0;j<3;j++)
		{
			printf("%d",*(p+j));
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		p=&M[i][0];
		for(j=0;j<3;j++)
		{
			if(i==j)
			    sum+=*(p+j);
		}
	}
	printf("\n Sum of all the diagonal elements is %d",sum);
	return 0;
}
