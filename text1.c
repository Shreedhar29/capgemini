#include<stdio.h>

int main()
{
	int a=10;
	int b=9;
	int c=8;
	int z;
	z=((a>b)?((a>c)?a:c):(b>c?b:c));
         printf("%d",z);
}
