#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, const char *src, size_t n)
{
	size_t i;
	int i = 0;

	for (i = o; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i < n; i++);
	        dest[i] = '\0';
	return (dest);
}
