//level2 question 20
//write a program print total number of single digit prime numbers


#include<stdio.h>
int main()
{
	int n,rem,c,i,total;
	printf("enter foue digit number:");
	scanf("%d",&n);
	total=0;
	while(n!=0)
		{
			rem=n%10;
			c=0;
			
			for(i=1;i<=rem;i++)
			{
				if(rem%i==0)
				{
					c=c+1;
				}
			}
			
			if(c==2)
			{
				total=total+1;
			}
			n=n/10;
		}
		printf("total no.of single digit prime numbers:%d",total);
	
}
