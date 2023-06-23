#include "main.h"

/**
 *_memcpy - function that copies memory area
 *
 *@dest: parameter where is stored
 *
 *@src: parameter where is copied
 *
 *@n: number of bytes
 *
 *Return: dest on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
