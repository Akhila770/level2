// level 2 question 5
//write a loop program to print sodd number from 1 to 9?
#include<stdio.h>
int main()
{
	int x,s;
	x=1;
	s=0;
	loop:if(x<=9)
	{
		if(x%2==1)
		{
			printf("%d\n",x);
		}
		x++;
		goto loop;
	}
	
}
