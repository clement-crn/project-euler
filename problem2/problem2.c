/* By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms */

#include <stdio.h>

int	main(void)
{
	int ra = 1;
	int rb = 1;
	int r;

	int c = 0;
	while (r <= 4000000)
	{
		r = ra + rb;
		ra = rb;
		rb = r;
		if (r % 2 == 0)
		{
			c = c+r;
		}
	}
	printf("%d",c);

}
