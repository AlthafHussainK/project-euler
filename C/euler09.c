#include<stdio.h>
void main()
{

	int i,j,k,s=0;
	
	for(i=1;i<1000;i++)
		{
			for(j=1;j<1000;j++)
				{
					s =i*i+j*j;
					
					for(k=1; k<1000; k++)
						{
							if(k*k==s && i+j+k==1000)
								printf("%d\t%d\t%d\n",i,j,k);
						}
						
				}
				
		}
		
		
}
