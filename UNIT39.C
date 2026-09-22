#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("Input value 1: ");
	scanf("%d",&a);
	printf("Input value 2: ");
	scanf("%d",&b);

	if(a%b==0)
	{
		printf("\nFirst number is divisible by second number");
	}
	else
	{
		printf("\nFirst number is not divisible by second number");
	}

	getch();
}