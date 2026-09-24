#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("Input value A: ");
	scanf("%d",&a);
	printf("Input value B: ");
	scanf("%d",&b);
	printf("Input value C: ");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
		printf("\nA is Minimum");
		}
		else
		{
		printf("\nC is Minimum");
		}
	}
	else
	{
		if(b<c)
		{
		printf("\nB is Minimum");
		}
		else
		{
		printf("\nC is Minimum");
		}
	}

	getch();
}