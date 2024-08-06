//level 2 question 28
//Write a program to get two numbers from user and print the LCM of those numbers.


#include<stdio.h>
int main()
{
	int a,b,num1,num2,gcd,lcm;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	a=num1;
	b=num2;
	//finding gcd
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	gcd=a;
	//printf("%d\n%d\n%d\n",a,b,gcd);
	//finding lcm=a*b/gcd
	
	lcm=(num1*num2)/gcd;
	printf("LCM of %d and %d:%d",num1,num2,lcm);
}
