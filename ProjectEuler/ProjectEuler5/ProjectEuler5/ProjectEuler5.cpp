// ProjectEuler5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int running = 0;
	int num1 = 2521;
	int isDivisible = 0;
	while (running = 1)
	{
		for (int j = 250; j < 1000000000; j++)
		{
			for (int i = 2; i <= 20; i++)
			{
				if (j % i != 0)
				{
					isDivisible = 0;
					break;
				}
				if (j % i == 0)
				{
					isDivisible = 1;
				}
			}
			if (isDivisible == 1)
			{
				printf("%d", j);
				printf("\n");
			}
		}
		return 0;
	}
    return 0;
}

