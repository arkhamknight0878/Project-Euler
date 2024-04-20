#include "Functions.h"

#include <math.h>

bool Is_Prime(unsigned long long divisor_)
{
	if (divisor_ % 2 == 0)
		return false;

	for (int i = 3; i < sqrt((double)divisor_); i += 2)
	{
		if (divisor_ % i == 0)
			return false;
	}

	return true;
}

unsigned long long Max_Divisor(unsigned long long number_)
{
	unsigned long long biggest_divisor = 0;

	if (number_ % 2 == 0)
		return 2;

	for (unsigned long long i = 3; i < sqrt((double)number_); i += 2)
	{
		if (Is_Prime(i) == true && number_ % i == 0)
			biggest_divisor = i;
	}

	return biggest_divisor;
}