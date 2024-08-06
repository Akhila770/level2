//level 2 question 19
/* write program to get a 4 digit number from user, print whether that number's middle 
   two digits(hundred's and ten's digit)is prime*/
   
   #include<stdio.h>
   #include<math.h>
   int main()
   {
   	int n,middle,q,power,num,len,i,c;
   	printf("enter foue digit number:");
	scanf("%d",&n);
	num=n;
	q=num/10;
	printf("%d\n",q);
	int q_temp=q;
	len=0;
	/*loop:if(q%10)
  	      {
  	         len=len+1;
  	         q=q/10;
			   goto loop;	
		   }
    printf("Length:%d\n",len);*/
    
   // power=pow(10,(len-1));
    
	middle=q_temp%100;  //middle=q_temp%power
	printf("middle number:%d\n",middle);
	
	c=0;
	for(i=1;i<=middle;i++)
    {
    	if(middle%i==0)
    	{
    		c=c+1;
		}
	}
	//check prime or not
	if(c==2)
	{
		printf(" prime number.");
	}
	else
	{
		printf(" not prime number.");
	}
   }
