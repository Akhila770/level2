//level 2 question 25
/* write a c program get a number from user print the total no of singlr digit 
prime numbers in the number?*/

#include<stdio.h>
int main()
{
   int n,rem,i;
   printf("enter any number:");
   scanf("%d",&n);
   int c,count=0;
   while(n>0)
   {
   	 rem=n%10;
   	 c=0;
   	 for(i=1;i<=rem;i++)
   	 {
   	  	if(rem%i==0)
   	  	{
   	  		 c++;
		 }
	 }
	 if(c==2)
	 {
	 	count++;
	 }
	 n=n/10;
    }	
    printf("count:%d",count);
}
