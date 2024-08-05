// level 2 question 16
//write a program get number from user print whether that number is prime or not

#include<stdio.h>
int main()
{
	int i,n,c;
	printf("enter any number: ");
	scanf("%d",&n);
	c=0;
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		c=c+1;
		}
	}
	if(c==2)
	{
		printf("%d is prime number.",n);
	}
	else
	{
		printf("%d is not a prime number.",n);
	}
}
