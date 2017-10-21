#include<stdio.h>
void main()
{

long sum=0;
	
	//int i=2520;
	for(long long i = 10000000;i<9999999999;i++) //error: ex only one loop
		{
			for(int j=1; j<=20; j++)
			{
				sum=sum+i%j;
			}
			
			if(sum == 0)
				{printf("%lld\n",i);}
			else
				sum=0;
		}
		
		
		
}
