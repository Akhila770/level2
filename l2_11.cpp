// level 2 question 11
//write a program to get a number from user, print the sum of two digit  numbers who's one's digit is 5?
#include<stdio.h>
int main()
{
	int x;
	int rem=0;
	printf("enter a number:");
	scanf("%d",&x);
	loop:if(x!=0)
	{   
	    if(x%10)
	   {
		 rem=rem+1;
	    }
		x=x/10;
		goto loop;
	}
	printf("%d",rem);
}
