#include<stdio.h>
void main()
{

	int n,p,d1,d2,d3,d4,d5,d6;
	
	for(int i=100; i<999; i++)
		{
			for(int j=101; j<998; j++)
				{
					p = n = i*j;
					
					d6=n%10;
					n=n/10;
					d5=n%10;
					n=n/10;
					d4=n%10;
					n=n/10;
					d3=n%10;
					n=n/10;
					d2=n%10;
					n=n/10;
					d1=n;
					
					if(d1 == d6)
						{
						if(d2 == d5)
							{
								if(d3==d4)
									{
									if(p>900000)
									printf("%d\n",p);
									}
							}
						}
				}
						
		}
}
		

					
