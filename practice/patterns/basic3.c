/*
Name:Harshavardhana B 
Date:
Date:
Sample input:
Sample output:
*/
#include<stdio.h>
int main()
{
     for(int i=1;i<=5;i++)
     {
	  for(int j=1;j<=i;j++)
	  {
	       printf("%d",j);
	       }
	  for(int j=i;j>=1;j--)
	  {
	       printf("%d",j);
	  }
	  printf("\n");


     }
}

