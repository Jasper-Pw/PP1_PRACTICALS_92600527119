#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,aoc,bm,pp1,bwd,es,total,per;
	clrscr();

	printf("Input your Roll Number: ");
	scanf("%d",&rollno);
	printf("Input your AOC mark: ");
	scanf("%d",&aoc);
	printf("Input your BM mark: ");
	scanf("%d",&bm);
	printf("Input your PP1 mark: ");
	scanf("%d",&pp1);
	printf("Input your BWD mark: ");
	scanf("%d",&bwd);
	printf("Input your ES mark: ");
	scanf("%d",&es);
	total=aoc+bm+pp1+bwd+es;
	printf("\nTotal marks: %d",total);
	per=total/5;
	printf("\nPercentage marks: %d%",per);

	if(per>=90)
	{
		printf("\nGrade A");
	}
	else if(per>=75)
	{
		printf("\nGrade B");
	}
	else if(per>=50)
	{
		printf("\nGrade C");
	}
	else if(per>=35)
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nYou're failed");
	}

	getch();
}