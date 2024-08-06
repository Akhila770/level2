//level 2 question 27
/*Write a program to print the total count of numbers which are less than
100000 and whose sum of digits is 14. */


#include<stdio.h>
int main()
{
	int i,rem,j,digit;
	int c=0;
	for(i=1;i<=100000;i++)
	{  
	    j=i;
	    int sum=0;
		while(j!=0)
		{
			rem=j%10;
			sum=sum+rem;
			j=j/10;
		}
		if(sum==14)
		{
		c=c+1;
     	}
	}
	printf("count=%d",c);
	
}
