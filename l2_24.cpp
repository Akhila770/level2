//level2 question 24
//write a c program get number from user print the total number of two perfect square numbers in the number?

#include<stdio.h>
#include<math.h>
int main()
{   
   int pd,c,cd,n,two_digit,i,rem,sqrt1;
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
           for(i=1;i<=9;i++)
           {
          	sqrt1=i*i;
        	if(two_digit==sqrt1)
        	{
 		    c=c+1;
	        }
            }
	  }
	  pd=cd;
	   n=n/10;
   }
   printf("count=%d",c);
}
