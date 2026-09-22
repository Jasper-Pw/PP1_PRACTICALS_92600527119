#include<stdio.h>
#include<conio.h>
void main()
{
	int x,s,c;
	clrscr();

	printf("Input side: ");
	scanf("%d",&x);
	s=x*x;
	printf("\nCalculate the Square: %d",s);
	c=x*x*x;
	printf("\nCalculate the Cube: %d",c);

	getch();
}