//level 2 question 22
//write a program get number from user print the total number of two digit odd numbers in the number

#include<stdio.h>
int main()
{   
   int pd,c,cd,n,two_digit;
   printf("enter any number:");
   scanf("%d",&n);
   pd=-1; 
   c=0;
   while(n>0)
   {
   	  cd=n%10;
   	  if(pd!=(-1))
   	  {
   	  	  two_digit=cd*10+pd;
   	  	  if(two_digit%2==0)
   	  	  {
   	  	  	 c=c+1;
		  }
		  printf("%d\n",two_digit);
	  }
	  pd=cd;
	   n=n/10;
   }
   printf("count=%d",c);
}
