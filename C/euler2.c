#include<stdio.h>
void main()
{

unsigned long long t1=0,t2=1,tn;
unsigned long long sum=0;

	for(int i=0; sum<4000000;i++)
		{
			tn=t1+t2;
			t1=t2;
			t2=tn;
		if(tn%2==0)
			{
				sum=sum+tn;
				
				//printf(" %llu,",tn);
			}		
			 
		}
	printf("\nSum= %llu\n",sum);	
}
