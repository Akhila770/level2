// level 2 question 4
//write a loop program to print sum of 6 to 1?
#include<stdio.h>
int main()
{
	int x,s;
	x=6;
	s=0;
	loop:if(x>=1)
	{
		s=s+x;
		x--;
		goto loop;
	}
	printf("%d\n",s);
}
