#include<stdio.h>
void main ()
{
	int i;j;row;sp;
	printf("enter the row");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
	for(sp=1;sp<=row;sp++)
	{
	  printf("  ");
}
     for(j=1;j<=i*2-1;j++)
     {
     	printf("*");
	 }
	printf(" ")
		}
	}

