// level 2 question 3
//write a loop program to print sum of 1 to 5?
#include<stdio.h>
int main()
{
	int x,s;
	x=1;
	s=0;
	loop:if(x<=5)
	{
		s=s+x;
		x++;
		goto loop;
	}
	printf("%d\n",s);
}
