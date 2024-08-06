//level 2 question 15
/*write a program to get a number from user and if the last digit of the number is even print the same 
  number. if the last digit of the number is odd then subract 1 from the last digit and print the number 
  NOTE:-last digit- MSB  */
  
  #include<stdio.h>
  #include<math.h>
  int main()
  {
  	 int n,num,sub,result;
  	 printf("enter any number:");
  	 scanf("%d",&num);
  	 int msb,len=0;
  	 n=num;
  	 loop:if(n%10)
  	      {
  	         len=len+1;
  	         n=n/10;
			   goto loop;	
		   }
    printf("Length:%d\n",len);
    int power=(pow(10,(len-1)));
	msb=num/power;
	printf("msb:%d\n",msb);
     int q=num%power;
	if(msb%2==0)
	{
		printf("result:%d\n",num);
	}
	else
	{
		sub=msb-1;
		result=sub*power+q;
		printf("result:%d",result);
	}
  } 
