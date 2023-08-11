#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - entry point
 *
<<<<<<< HEAD
 * description: false or true validation
 * 
=======
 * Description: false or ture validation
 *
>>>>>>> 6ee99204b5e219cb144449c6e14f90a5d914de4f
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
