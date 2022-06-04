/* The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ? */

//tentative 2: 8462696833 
// tentative3 : 6857
#include <stdio.h>

int main()
{
  	int i, j,isPrime;
	long int Number = 600851475143; 
   
  	for (i = 2; i <= Number; i++)
   	{
     	if(Number % i == 0)
        {
   			isPrime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					isPrime = 0;
					break;
				}
			} 
			if(isPrime == 1)
			{
				printf("\n %d", i);
			}	          	
		}
   }
  	return 0;
}
