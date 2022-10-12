#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int muhammad, Bello;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	muhammad = atoi(argv[1]);
	if (muhammad < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	Bello = 0;
	if (muhammad > 0)
	{
		while (Bello < (muhammad - 1))
			printf("%02hhx ", func_ptr[Bello++]);
		printf("%hhx\n", func_ptr[Bello]);
	}
	return (0);
}
