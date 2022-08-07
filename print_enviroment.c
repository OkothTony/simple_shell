#include "shell.h"

/**
  * print_environ - prints all the environment variables.
  * Return: nothing.
  */
void print_environ(void)
{
	int j;

	j = 0;
	while (environ[j])
		printf("%s\n", environ[j++]);
}
