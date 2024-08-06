//level 2 question 26
// write a program to print biggest 4 digit number which is divisible by 7 and 9?

#include<stdio.h>
int main()
{   
    int gcd,i,lcm,biggest_num;
    int a=6,b=12;
    int num1=a,num2=b;
    //finding gcd and lcm
    while(b!=0)
    {
    	int temp=b;
    	b=a%b;
    	a=temp;
	}
	gcd=a;
	lcm=(num1*num2)/gcd;
	printf("%d\n",lcm);
    for(i=9999;i>=1000;i--)
    {
    	if(i%lcm==0)
    	{
    	   biggest_num=i;
    	   break;
		}
	}
		printf("biggest 4 digit number which is divisible by 7 and 9:%d",i);

}
