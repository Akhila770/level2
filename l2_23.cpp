//level 2 question 23
/*write a program to get a number from user print the total number of single digit perfect
  square numbers  */
  
  
  #include<stdio.h>
  #include<math.h>
  int main()
  {
  	long int n,rem;

    int sqrt1,i,c;
  	printf("enter any number:");
  	scanf("%d",&n);
  	c=0;
        while(n>0)
        {
            rem=n%10;
           for(i=1;i<=3;i++)
           {
          	sqrt1=i*i;
        	if(rem==sqrt1)
        	{
 		    c=c+1;
	        }
            }
            n=n/10;
	    }
	    printf("total no.of of single digit perfect numbers:%d",c);
  }
