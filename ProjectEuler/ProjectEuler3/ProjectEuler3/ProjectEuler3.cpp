// ProjectEuler3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int running = 1;

	while (running == 1)
	{
		long long isFactor, isNotPrime, num1;
		isNotPrime = 0;
		printf("Please enter a number: \n");
		scanf_s("%lld", &num1);

		printf("Your prime factors are: \n");
		for (long long i = 2; i < num1; i++)
		{
			if (num1 % i == 0)
			{
				isFactor = 1;
				for (long long j = 2; j < i; j++)
				{
					if (i % j == 0)
					{
						isNotPrime = 1;
					}
				}
				if (isNotPrime == 0)
				{
					printf("%lld", i);
					printf("\n");
				}
			}
		}
	}
    return 0;
}


