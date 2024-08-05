// level 2 question 9
//write a loop program to print the sum of two digit  numbers who's one's digit is 5?
#include<stdio.h>
int main()
{
	int x;
	x=10;
	int s=0;
	loop:if(x>=10 && x<=99)
	{   
		if(x%10==5)
		{
		  s=s+x;
	    }
		x++;
		goto loop;
	}
	printf("%d",s);
}
