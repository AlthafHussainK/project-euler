#include<stdio.h>
#define N 13000
void main()
{
	int sum=N*(N+1)/2,m=0,large=1,ln;
	
	for(int i=N-1000; i<=N; i++)
		{
			sum = i+sum;
			m=0;
			for(int j=1; j<=sum; j++)
				{
					if(sum%j == 0)
						++m;
				}
			if(m>400)
				{large=m;	
				ln=sum;}
		printf("%d\t%d\n",sum,m);
		}
		
	printf("Large=%d\n%d\n", large,ln);
}
