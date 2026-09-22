#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,a;
	clrscr();

	printf("Input value 1: ");
	scanf("%d",&x);
	printf("Input value 2: ");
	scanf("%d",&y);
	printf("Input value 3: ");
	scanf("%d",&z);
	a=(x+y+z)/3;
	printf("\nAverage: %d",a);

	getch();
}