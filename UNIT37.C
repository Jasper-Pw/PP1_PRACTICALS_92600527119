#include<stdio.h>
#include<conio.h>
void main()
{
	int q;
	float p,tp,d,fp;
	clrscr();

	printf("Input Quantity: ");
	scanf("%d",&q);
	printf("Input Price: Rs. ");
	scanf("%f",&p);

	if(tp>1000)
	{
		printf("\nDiscount 15%");
		d=p*0.15;
	}
	else
	{
		printf("\nDiscount 10%");
		d=p*0.10;
	}

	tp=p*q;
	printf("\nTotal Price: %.2f",tp);
	fp=p-d;
	printf("\nPrice after discount: %.2f",fp);

	getch();
}