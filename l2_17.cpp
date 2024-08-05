//level 2 question 17
//write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.

#include<stdio.h>
int main()
{
	int i,n,c,rem,b,s;
	printf("enter any number: ");
	scanf("%d",&n);
	c=0;
	rem=n%10;
	b=n/10;
	s=rem+b;
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		c=c+1;
		}
	}
	if(c==2 && s==14)
	{
		printf("%d is prime number.",n);
	}
	else
	{
		printf("%d is not a prime number.",n);
	}
}
