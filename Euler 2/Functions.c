#include "Functions.h"

#include <stdlib.h>
#include <stdio.h>

unsigned long long EvenFibSum(unsigned long long upper_bound_)
{
	unsigned long long even_sum = 0;

	unsigned long long fib_first = 0;
	unsigned long long fib_second = 1;

	while (fib_second < upper_bound_)
	{
		unsigned long long save = fib_second;

		if (fib_second % 2 == 0)
			even_sum += fib_second;
		
		fib_second += fib_first;
		fib_first = save;
	}

	return even_sum;
}