#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @usrn: parameter
 * @len: parameter
 * Return: random number
 */

int f4(char *usrn, int len)
{
	int c;
	int vc;
	unsigned int r_nu;

	c = *usrn;
	vc = 0;
	while (vc < len)
	{
		if (c < usrn[vc])
			c = usrn[vc];
		vc += 1;
	}
	srand(c ^ 14);
	r_nu = rand();
	return (r_nu & 63);
}

/**
 * f5 - multiplies each char of username
 * @usrn: parameter
 * @len: parameter
 * Return: chars
 */

int f5(char *usrn, int len)
{
	int c;
	int vc;

	c = vc = 0;
	while (vc < len)
	{
		c = c + usrn[vc] * usrn[vc];
		vc += 1;
	}
	return (((unsigned int)c ^ 239) & 63);
}

/**
 * f6 - generates a random char
 * @usrn: parameter
 * Return: char
 */

int f6(char *usrn)
{
	int c;
	int vc;

	c = vc = 0;
	while (vc < *usrn)
	{
		c = rand();
		vc += 1;
	}
	return (((unsigned int)c ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int l, c, vc;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (l = 0; argv[1][l]; l++)
		;
	keygen[0] = ((char *)alph)[(l ^ 59) & 63];
	c = vc = 0;
	while (vc < l)
	{
		c = c + argv[1][vc];
		vc = vc + 1;
	}
	keygen[1] = ((char *)alph)[(c ^ 79) & 63];
	c = 1;
	vc = 0;
	while (vc < l)
	{
		c = argv[1][vc] * c;
		vc = vc + 1;
	}
	keygen[2] = ((char *)alph)[(c ^ 85) & 63];
	keygen[3] = ((char *)alph)[f4(argv[1], l)];
	keygen[4] = ((char *)alph)[f5(argv[1], l)];
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (c = 0; keygen[c]; c++)
		printf("%c", keygen[c]);
	return (0);
}
