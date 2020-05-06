#include<stdio.h>
#define MAX 35
typedef struct{
	int empno;
	char empname[MAX];
	char deptname[MAX];
	long int salary;
}employee;
void read(employee emp[],int i);
void print(employee emp[],int i);
int main()
{
	employee emp[20];
	int i;
	for(i=0;i<20;i++)
	{
		read(emp,i);
	}
	for(i=0;i<20;i++)
	{
		print(emp,i);
	}
	return 0;
}
void read(employee emp[],int i)
{
	printf("\n Enter employee number,employee name,department name,salary in order:\n");
	scanf("%d %s %s %ld",&emp[i].empno,emp[i].empname,emp[i].deptname,&emp[i].salary);
}
void print(employee emp[],int i)
{
	printf("\n The data for employee no. %d is\n",i+1);
	printf("The employee number is %d \n The employee name is %s \n The department name is %s \n The salary of the  employee is %ld",emp[i].empno,emp[i].empname,emp[i].deptname,emp[i].salary);
}
