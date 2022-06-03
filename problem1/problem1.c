/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. */

#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int 	r = 0;

	while (i <= 999)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			r = r + i;
		}
	i++;
	}
	printf("%d", r);		
}
