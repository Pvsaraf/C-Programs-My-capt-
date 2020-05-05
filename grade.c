#include<stdio.h>
int main()
{
	int marks;
	printf("\n Enter your marks:");
	scanf("%d",&marks);
	if(marks>=85)
	    printf("\n GRADE A");
	else if(marks>=70)
	    printf("\n GRADE B");
	else if(marks>=55)
	    printf("\n GRADE C");
	else if(marks>=40)
	    printf("\n GRADE D");
	else
	    printf("\n GRADE F");
	return 0; 
}
