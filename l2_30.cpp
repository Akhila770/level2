//level 1 question 2
//Write a program to get two numbers from user and print the HCF of those numbers.

#include<stdio.h>
int main()
{
	int a,b,num1,num2,hcf,small_num,large_num,i,rem;
	printf("enter any number:");
	scanf("%d",&num1);
	printf("enter any number:");
	scanf("%d",&num2);
	a=num1;
	b=num2;
	int product=1;
	while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf=a;
    printf("%d",hcf);
}
