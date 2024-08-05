// level 2 question 7
//write a loop program to print the two digit odd numbers who's sum of digits are 7?
#include<stdio.h>
int main()
{
	int x;
	x=10;
	loop:if(x>=10 && x<=99)
	{   
		if(x%2==1 && ((x/10)+(x%10))==7)
		{
			printf("%d\n",x);
	    }
		x++;
		goto loop;
	}
}
