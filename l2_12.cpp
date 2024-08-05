// level 2 question 12
//write a program to get a number from user, print the sum of all digits?
#include<stdio.h>
int main()
{
	int x;
	int rem=0;
	printf("enter a number:");
	scanf("%d",&x);
	loop:if(x!=0)
	{   
	     
		 rem=rem+(x%10);
		x=x/10;
		goto loop;
	}
	printf("%d",rem);
}
