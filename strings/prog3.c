#include<stdio.h>

int main()
{
  int arr[5][4];
  int i,j;

  for(i=0;i<2;i++)
  {
    scanf("%d",&arr[i][0]);
    for(j=1;j<4;j++)
	 {
	   scanf("%d",&arr[i][j]);
	 }
  }
   printf("rollno    m1     m2    m3  \n");
   for(i=0;i<2;i++)
    {
	  printf("%d    ",arr[i][0]);
	  for(j=1;j<4;j++)
	   {
	     printf("%d   ",arr[i][j]);
	   }
	   printf("\n\n");
	}
return 0;
}

