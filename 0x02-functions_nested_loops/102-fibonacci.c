#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int f0 = 0;
	int f1 = 1;
	int f2;

	for (i = 1 ; i <= 50 ; i++)
	{
		printf("%d\n", f1);
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		printf(", ");
	}
}
