// level 2 question 1
//write a loop program to print 1 to 5 on one by one
#include<stdio.h>
int main()
{
	int x;
	x=1;
	loop:if(x<=5)
	{
		printf("%d\n",x);
		x++;
		goto loop;
	}
}
