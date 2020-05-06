#include<stdio.h>
#include<stdlib.h>
#define MAX 350
int main()
{
	FILE *fp1,*fp2;
	char infilename[MAX],outfilename[MAX],c,temp[MAX];
	int i=0;
	printf("\n Enter the input file name:");
	scanf("%s",infilename);
	printf("\n Enter the output file name:");
	scanf("%s",outfilename);
	fp1=fopen(infilename,"r");
	if(fp1==NULL)
	{
		printf("\n Error in opening file");
		exit(-1);
	}
	fp2=fopen(outfilename,"w");
	if(fp2==NULL)
	{
		printf("\n Error in opening file");
		exit(-1);
	}
	c=fgetc(fp1);
	while(c!=EOF)
	{	
		temp[i++]=c;
		fprintf(fp2,"%c",c);
		c=fgetc(fp1);
	}
	i--;
	printf("\n The file in reverse order is:\n");
	for(;i>=0;i--)
	{
		printf("%c",temp[i]);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
