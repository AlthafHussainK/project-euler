#include<stdio.h>
void main()
{
	int t=0,s=0;
	
	for(long i=2; i<100000000; i++)
	{
		for(long j=2; j<i; j++)
			{
				if( i%j == 0)
					{
						s=s+1;
						break;
					}
			}
		if( s == 0)
		{
			t++;
			if(t==10001)
			{printf("%ld\n",i);
			break;
			}	
		}
	s=0;
	}
}
