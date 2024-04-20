#include "Functions.h"

#include <stdio.h>

int main()
{
	unsigned long long number = 0;

	printf("Enter Number: ");
	scanf_s("%llu", &number);

	printf("Biggest Prime Divisor of %llu is: %llu", number, Max_Divisor(number));

	return 0;
}