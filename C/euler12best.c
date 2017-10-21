#include <stdio.h>
#include <math.h>
#define TARGET 500


int main (void)
{
 int divisors = 2;
 int i = 7;
 int limit; 


 unsigned int triangle = 28; 


 while ( divisors <= TARGET )
 {
  divisors = 2; // reset: 1 and itself 
  i++;


  triangle += i; // thank you 7aka for correcting my oversight 
  limit = sqrt(triangle); 
  
  int j;


  for (j = 2; j <= limit; j++)
  {
   if (!(triangle % j))
   {
    if (j == limit) // this is the square root so only add 1 to divisors
     divisors++;
    else
     divisors += 2;
   }
  }
 }

 printf("The first triangle number with 500 or more divisors is %d\n", triangle);


 return 0;
}

