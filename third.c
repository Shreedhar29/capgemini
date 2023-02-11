#include<stdio.h>

int main()
{
int a,b,c,n;
   printf("enter your choice \n");
   scanf("%d",&n);
   switch(n)
   {
   case 1: printf("enter value of  a to add\n");
           scanf("%d",&a);
           printf("enter value of  b to add\n");
           scanf("%d",&b);
		   c=a+b;
		   printf("Addition of %d and %d is %d\n",a,b,c);
           break; 
  case 2:printf("enter value of a to Subtract\n");
          scanf("%d",&a);
          printf("enter value of b to Subtract\n");
		  scanf("%d",&b);
		  c=a-b;
		  printf("Substraction of %d and %d is %d\n",a,b,c);
          break;
  case 3:printf("enter value of a to multiply\n");
         scanf("%d",&a);
         printf("enter value of  b to Multiply\n");
	     scanf("%d",&b);
		 c=a*b;
		 printf("Multiplication of %d and %d is %d\n",a,b,c);
         break;         
  case 4:printf("enter value of a to divide\n");
         scanf("%d",&a);
         printf("enter value of b to divide\n");
		 c=a/b;
		 printf("Division of %d and %d is %d\n",a,b,c);
		 break;
   default:printf("Please us e valid cases\n");
    }
 }

