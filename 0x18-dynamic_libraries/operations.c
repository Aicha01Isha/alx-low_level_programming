int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int div(int i, int k);
int mod(int i, int k);

/**
 * add - adds two intergers
 * @i: parameter
 * @k: parameter
 * Return: sum
*/

int add(int i, int k)
{
	return (i + k);
}

/**
 * sub - subtracts two integers
 * @i: parameter
 * @k: parameter
 * Return: subtract
*/

int sub(int i, int k)
{
	return (i - k);
}

/**
 * mul - multiplies two integers
 * @i: parameter
 * @k: parameter
 * Return: multiple
*/

int mul(int i, int k)
{
	return (i * k);
}

/**
 * div - divideds two integers
 * @i: parameter
 * @k: parameter
 * Return: dividend integer
*/

int div(int i, int k)
{
	return (i / k);
}

/**
 * mod - finds the modulus of two integers
 * @i: parameter
 * @k: parameter
 * Return: modulus
*/

int mod(int i, int k)
{
	return (i % k);
}
