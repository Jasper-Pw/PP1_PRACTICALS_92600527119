#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	clrscr();

	printf("Input year: ");
	scanf("%d",&y);

	if(y%4==0)
	{
		printf("\nLeap Year");
	}
	else
	{
		printf("\nNot Leap Year");
	}

	getch();
}