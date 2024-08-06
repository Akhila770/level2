//level 2 question 29
//Write a program to get three numbers from user and print the LCM of  those numbers.


#include<stdio.h>
int main()
{
	int a,b,c,num1,num2,num3,gcd1,gcd2,lcm1,lcm;
	printf("Enter any number:");
	scanf("%d",&num1);
	printf("Enter any number:");
	scanf("%d",&num2);
	printf("Enter any number:");
	scanf("%d",&num3);
	a=num1;
	b=num2;
	c=num3;
	//gcd of num1 and num2
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	gcd1=a;
	//lcm of num1 and num2
	lcm1=(num1*num2)/gcd1;
//	printf("%d",lcm1);
	//lcm of lcm1 and num3
	int a1=num3;
	int b1=lcm1;
	while(b1!=0)
	{
		int temp=b1;
		b1=a1%b1;
		a1=temp;
	}
	gcd2=a1;
	lcm=(lcm1*num3)/gcd2;
	printf("LCM of %d,%d,%d: %d",num1,num2,num3,lcm);
}
