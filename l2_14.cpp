// level 2 question 14
//write a program to get a number from user, intrchange the first and last digits and print the result  ?
#include<stdio.h>
#include<math.h>
int main()
{
	int x,c;
	int rem,len,temp,last,q,middle;
	printf("enter a number:");
	scanf("%d",&x);
	rem=x%10;
	temp=x;
	int temp1=x;
	printf("%d\n",rem);
	loop:if(x%10)
	{   
	     len=len+1;
	     x=x/10;
		goto loop;
	}
	printf("%d\n",len);
	last=temp/(pow(10,len-1));
	printf("%d\n",last);
	q=temp/10;
	printf("%d\n",q);
    middle=q % (pow(10,len-2));
	printf("%d",middle);
	
}
