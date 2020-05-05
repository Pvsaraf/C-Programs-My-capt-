#include<stdio.h>
int main()
{
	int choice;
	printf("\n Menu");
	printf("\n 1.Pizza,Rs 239 \n 2.Burger,Rs 129 \n 3.Pasta,Rs 179 \n 4.French Fries,Rs 99 \n 5.Sandwitch,Rs 149");
	printf("\n Enter a proper choice between 1 to 5:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("\n Food Item-Pizza \n Price-Rs 239");
		       break;
		case 2:printf("\n Food Item-Burger \n Price-Rs 129");
		       break;
		case 3:printf("\n Food Item-Pasta \n Price-Rs 179");
		       break;
		case 4:printf("\n Food Item-French Fries \n Price-Rs 99");
		       break;
		case 5:printf("\n Food Item-Sandwitch \n Price-Rs 149");
		       break;
		default:printf("\n Enter a proper choice between 1 to 5:");
	}
	return 0;
}
