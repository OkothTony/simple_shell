#include <stdio.h>

/*
 * main - prints all arguments it received.
 * Return: Always 0 (success).
 */

int main(void)
{

	int x, y;
	int result;

	printf("This calculator can only multiply two numbers of integer data type\n");
	printf("Enter a number:\n");
	scanf("%d", &x);
	printf("Enter another number:\n");
	scanf("%d", &y);
	result = x * y;
	printf("The result of multiplying %d and %d is %d\n", x, y, result);
	return (0);

}
