#include <stdio.h>

/**
 * main - this program prints all arguments it receives
 * @argc: integer (number of params)
 * @argv: array of pointers to char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
