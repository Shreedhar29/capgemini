#include<stdio.h>
 
int main()
{
	int n=0;

	printf("Welcome \n");
	printf("enter a number 1 for Monday\n");
	printf("enter a number 2 for Tuesday\n");
	printf("enter a number 3 for Wednesday\n");
	printf("enter a number 4 for Thursday\n");
	printf("enter a number 5 for Friday\n");
	printf("enter a number 6 for Saturday\n");
	printf("enter a number 7 for Sunday\n");
        printf("enter a particular number to know your traning schedule\n");
	scanf("%d",&n);

	if(n==1)
	{
		printf("training mode is virtual\n");
		printf("join systemc programming\n");
		printf("after class revise today's class\n");
	}
	else if(n==2)
	{
		printf("training mode is virtual\n");
		printf("join systemc programming class\n");
		printf("after class revise today class and practice some linux commands\n");
	}
        else if(n==3)
	{
		printf("training mode is virtual\n");
		printf("join powerup skills class\n");
		printf("after class work on some english grammer \n");
	}
	else if(n==4)
	{
		printf("you need to go to the office for training\n");
		printf("today you have two class they are systemc programming and powerup skills\n");
		printf("after class revise today's lecture and work on some linux commands\n");

	}
        else if(n==5)
	{	
		printf("you need to go to the office for trainning\n");
		printf("today's class is systemc programming\n");
		printf("after class work on some c codes\n");
	}
	else if(n==6)
	{
		printf("you need to go to the office for training\n");
		printf("today's class is powerup skills\n");
		printf("after class have some rest and revise all classes taught on this week\n");
	}
	else if(n==7)
	{ 
	       printf("ufff no classes ,have some time with family and friends\n");
               printf("if you have time then work on some linux commands\n");

	}
	else
	{
		printf("Enter a  proper number of the day that is(1-7) \n");
	}
	
                                                  	       


  
}
