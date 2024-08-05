// level 2 question 2
//write a loop program to print 5 to 1 on one by one
#include<stdio.h>
int main()
{
	int x;
	x=5;
	loop:if(x>=1)
	{
		printf("%d\n",x);
		x--;
		goto loop;
	}
}
