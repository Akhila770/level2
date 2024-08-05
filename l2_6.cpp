// level 2 question 6
//write a loop program to print the two digit numbers,below 20?
#include<stdio.h>
int main()
{
	int x;
	x=1;
	loop:if(x>=10 && x<=20)
	{
		if(x%2==1)
		{
			printf("%d",x);
		}
		x++;
		goto loop;
	}
}
