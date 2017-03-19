#include<stdio.h>
#include"stdlib.h"
#include<ctype.h>

int main()
{
	const unsigned int symbol_eq = 6;
	char array[2][symbol_eq];
	printf("Hi. Please, put first and second equation: \n");
	int swap; int error = 0;
	for (unsigned int f = 0; f < 2; ++f)
	{
		for (unsigned int i = 0; i < symbol_eq;)
		{
			swap = getchar();
			if (EOF != swap)
			{
				if (isgraph(swap))
				{
					array[f][i] = (char)swap;
					++i;
				}
			}
			else
			{
				error = 1;
				break;
			}
		}
		if (error)
		{
			break;
		}
	}
	swap = 0;
	int sigma = 0;
	for (unsigned int f = 0; f < 2; ++f)
		for (unsigned int i = 0; i < symbol_eq; ++i)
			{
			sigma = sigma + array[f][i];
			}
	printf("Summ of both array: %d\n", sigma);
	system("pause");
	return 0;
}