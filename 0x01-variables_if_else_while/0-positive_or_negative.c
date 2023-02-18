#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0){
		printf(n ,"is negative\n");
	}else if (n > 0) {
		printf(n ,"is positive\n");
	}else{
		printf(n ,"is zero\n");
	}
	return (0);
}
