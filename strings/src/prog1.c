#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char sname[20];
  char dname[20];
  int res1,res2;
  printf("Enter a source  string\n");
  scanf("%s",sname);
  printf("Enter a another string\n");
  scanf("%s",dname);
//  toupper(dname[0]);
  printf("%s",dname);
  res1 =strcmp(sname,dname);
  res2 =strcmp(dname,sname);
 printf("%d %d",res1,res2);
  
  printf("Status changes\n");

//  printf("%d\n",strlen(name));

  return 0;

  }
