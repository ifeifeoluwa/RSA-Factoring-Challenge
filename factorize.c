#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: int
 */
unsigned long int factorize(char *buffer)
{

	unsigned long int num;
	unsigned long int i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%lu=%lu*%lu\n",num,num/i,i);
			break;
		}
	}

return (0);
}
