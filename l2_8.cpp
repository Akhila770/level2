// level 2 question 8
//write a loop program to print the two digit even numbers who's sum of digits are 6?
#include<stdio.h>
int main()
{
	int x;
	x=10;
	loop:if(x>=10 && x<=99)
	{   
		if(x%2==0 && ((x/10)+(x%10))==6)
		{
			printf("%d\n",x);
	    }
		x++;
		goto loop;
	}
}
