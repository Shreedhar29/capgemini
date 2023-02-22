#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
 int i;
 int count;
 int l1,l2;
 char str1[20],str2[20];
 char str3[40];
 printf("Enter string 1\n");
 scanf("%s",str1);
 printf("Enter string 2\n");
 scanf("%s",str2);
  
 l1=strlen(str1);
 l2=strlen(str2);
 
 for(i=0,count=0;i<(l1>l2?l1:l2);i++)
 {
     if(str1[i]!='\0')
	  {
	     str3[count++]=str1[i];
	  }
	  if(str2[i]!='\0')
	  {
	     str3[count++]=str2[i];
	  }
 }
  printf("%s",str3);

  return 0;

 }
 
