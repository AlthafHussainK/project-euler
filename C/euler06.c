#include<stdio.h>
void main()
{

	int sum_sq=0,sq_sum=0,d,s=0;
	
	for(int i=1; i<=100;i++)
		{
			sum_sq =sum_sq + i*i;
			
			s=s+i;
			sq_sum=s*s;
			
		}
	d= sum_sq - sq_sum;
	
	printf("%d\n%d\n%d\n",d,sum_sq,sq_sum);
	
}
