#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int ans1,ans2;
int point1,point2;
int point01,point02;
int total,total2;

clrscr();

printf("  WELCOM TO THE GAME\n\n");

printf("> press 5 to start game\n");
printf("> press 0 to exit game\n");

scanf("%d",&i);

if(i==5)
{
	printf("The game has started\n\n");
}
else if(i==0)
{
	printf("You exit the game");
}
else
{
	printf("INVALID KEY");

}
if(i==5)
{
	printf("1) What is my name?\n");
	printf("1) David\n");
	printf("2) Ronnie\n");
	printf("3) clay\n");
	printf("4) Finn\n");

	printf("Enter your answer :");
	scanf("%d",&ans1);

	if (ans1==2)
	{
		printf("\nCorrect answer\n");
		point1 = 5;
		printf("You have score %d points\n",point1);
		total = point1;
		printf("Total score :%d\n\n",total);
	}

	else
	{
		printf("\nWrong answer\n");
		point01 = 0;
		printf("You have score %d points\n\n",point01);
		total = point01;
		printf("Total Score : %d\n\n",total);
	}


	printf("\n1) Delhi is a capital of which country?\n");
	printf("1) China\n");
	printf("2) Russia\n");
	printf("3) Shri Lanka\n");
	printf("4) India\n");

	printf("Enter your answer :");
	scanf("%d",&ans2);


	if (ans2==4)
	{
		printf("\nCorrect answer\n");
		point2 = 5;
		printf("You have score %d points\n",point2);
		total2 = (total+point2);
		printf("Total Score : %d",total2);

	}
	else
	{
		printf("\nWrong answer\n");
		point02 = 0;
		printf("You have score %d points\n\n",point02);
		total2 = (total+point02);
		printf("Total Score : %d",total2);
	}
}









getch();
}








