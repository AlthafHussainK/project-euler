#include<stdio.h>
#define N 100
int main(void)
{

	int large=1,m=1,n;
	int num[N];
	
	
	scanf("%d",&n);
	for(int j=0;j<N;j++)
		{
		num[j]=n%10;
		n=n/10;
		}
	
	for(int i=0; i+2<N;i++)
	{
	 m=(num[i])*(num[i+1])*(num[i+2]);
	 
	 if(m>large)
	  large=m;
	  
	 }
	 printf("%d\n",large);
	 
return 0;
}
	
	
