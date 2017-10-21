#include<stdio.h>
#define N 600851475143
void main()
{

	long long i,j,t,fact=1;
	
	for(i=3; i<N; i+=2)
		{
			if(i%2 != 0)
			{
			
			t=0;
			for(j=3; j<i; j+=3)
				{
					if(i%j == 0)
						{
						t=1;
						break;
						}
				}
			if(t == 1)
				{}
			else	
				{
					fact=i;
						if( N%i == 0)
							{
								printf("%llu\n",i);
						}
				}
				}	
		}
		
}
				
		





			
			
