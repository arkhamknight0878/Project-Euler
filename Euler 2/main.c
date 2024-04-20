#include "Functions.h"

#include <stdio.h>

int main()
{
	unsigned long long upper_bound = 0;

	printf("Enter Upper Bound: ");
	scanf_s("%llu", &upper_bound);

	printf("Sum of Even Fiboncci Numbers < %llu is: %llu\n", upper_bound, EvenFibSum(upper_bound));

	return 0;
}