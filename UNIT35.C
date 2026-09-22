#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("Input value A: ");
	scanf("%d",&a);
	printf("Input value B: ");
	scanf("%d",&b);

	if(a==b)
	{
		printf("Both of value are equal");
	}
	else
	{
		printf("Both of value are not equal");
	}

	getch();
}