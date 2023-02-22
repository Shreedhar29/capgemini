#include<stdio.h>
#include<string.h>
char sort(char []);

int main()

{
  char str1[20];
  printf("enter a string\n");
  scanf("%s",str1);
  printf("String before sorting %s\n",str1);
  sort(str1);
  printf("String after sorting %s\n",str1);
  return 0;
}

char sort(char str[])
{
   int i,j;
   char temp;

   for(i=0;i<strlen(str)-2;i++)
   {
     for(j=0;j<strlen(str)-2-i;j++)
	 {
	    if(str[j]>str[j+1])
		 {
		   temp=str[j];
		   str[j]=str[j+1];
		   str[j+1]=temp;
		 }
	   }
    }
}
