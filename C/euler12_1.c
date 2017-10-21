#include<stdio.h>
int main(void)
{

long n;
int r=0;

long i=1000;
	while(1)
		{
			n=i*(i+1)/2;
			
		for(long j=0;j<i;j++)
			{
				if(n%j == 0)
					r++;
				printf("%d\n",r);
			}
		//if( r==500)
		 //x	break;
		 i++;
		}
return 0;

}
