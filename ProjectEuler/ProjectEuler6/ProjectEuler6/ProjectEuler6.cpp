// ProjectEuler6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int programRunning = 0;
	while (programRunning = 1)
	{
		int num1, num2, sumOfTheSquares, squareOfTheSum, difference;
		num2 = 0;
		sumOfTheSquares = 0, squareOfTheSum = 0;


		for (int i = 1; i <= 100; i++)
		{
			num1 = i * i;
			sumOfTheSquares = sumOfTheSquares + num1;
			num2 = num2 + i;
			squareOfTheSum = num2 * num2;
			difference = squareOfTheSum - sumOfTheSquares;
		}
		printf("%d \n", sumOfTheSquares);
		printf("%d \n", squareOfTheSum);
		printf("%d \n", difference);
		return 0;
	}
    return 0;
}

