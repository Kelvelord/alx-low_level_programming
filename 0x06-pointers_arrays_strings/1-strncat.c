#include "main.h"

/**
 * _strncat - copys a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[i] = '\0';
	j++;
	}

	return (dest);
}
