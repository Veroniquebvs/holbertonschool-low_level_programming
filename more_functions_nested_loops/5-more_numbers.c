#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Affiche les chiffres de 0 à 14, 10 fois
 */

void more_numbers(void)
{
	int i, number;

	for (i = 0; i < 10 ; i++)
	{
		for (number = 0; number <= 14; number++)
		{


			if (number > 9)
			{
				_putchar ('1');
			}

			_putchar (number % 10 + '0');

		}
		_putchar('\n');
	}


}
