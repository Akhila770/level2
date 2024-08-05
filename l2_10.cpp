// level 2 question 10
//write a loop program to print the sum of two digit odd numbers who's ten's digit is 7?
#include<stdio.h>
int main()
{
	int x;
	x=10;
	int s=0;
	loop:if(x>=10 && x<=99)
	{   
		if(x%2==1 && (x/10)==7 )
		{
			s=s+x;
	    }
		x++;
		goto loop;
	}
	printf("%d",s);
}
