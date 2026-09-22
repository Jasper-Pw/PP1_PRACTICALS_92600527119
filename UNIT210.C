#include<stdio.h>
#include<conio.h>
void main()
{
	int q,p,d;
	float f;
	clrscr();

	printf("Input Quantity: ");
	scanf("%d",&q);
	printf("Input Price: $");
	scanf("%d",&p);
	printf("Input Discount: ");
	scanf("%d",&d);
	f=q*(p-(p*d/100));
	printf("\nFinal Amount: $%.2f",f);

	getch();
}