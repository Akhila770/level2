// level 2 question 18
/* write a program to get a number from user, print whether that number's first two digits(ten's
   digit and one's digit) is prime*/
   
   
#include<stdio.h>
int main()
{
	int n,digit,i;
	printf("enter any number:");
	scanf("%d",&n);
	int c=0;
	digit=n%100;
	printf("digits in tens and ones place:%d\n",digit);
	for(i=1;i<=digit;i++)
    {
    	if(digit%i==0)
    	{
    		c=c+1;
		}
	}
	//check prime or not
	if(c==2)
	{
		printf(" prime number.");
	}
	else
	{
		printf(" not prime number.");
	}
	
}
