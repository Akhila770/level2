// level 2 question 13
//write a program to get a number from user, print the reverse of the number?
#include<stdio.h>
int main()
{
	int x,rev;
	int rem=0;
	rev=0;
	printf("enter a number:");
	scanf("%d",&x);
	loop:if(x>0)
	{   
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
		goto loop;
	}
	printf("%d",rev);
}
