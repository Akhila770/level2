//level 2 question 21
// write a program get number from user print the total number digits which are odd in the number

#include<stdio.h>
int main()
{
	int n,rem,c,i;
	printf("enter any number:");
	scanf("%d",&n);
	c=0;
	while(n!=0)
	{  
	     rem=n%10;
			if(rem%2==1)
			{
				c=c+1;
			}
		n=n/10;
	}
	printf("total no.of odd numbers:%d",c);
}
