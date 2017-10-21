#include<stdio.h>
#define N 2000000
int main(void)
{

	long long n,sum=0;
	
	for(long long i=3; i<N;i+=2)
		{
		n=0;
			for(long long j=2; j<i; j++)
				{
					if(i%j == 0)
						{
							n=1;
							break;
						}
					
				}
		if( n == 0)
			{
				
				sum = sum+i;
				printf("%lld\n",sum);
			}
		}
	
		
return 1;

}
