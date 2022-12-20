#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;
	int i = 0;

	while (*src != '\0')
	{
		*dest = *scr;
		dest++;
		scr++;
	}
	*dest ='\0';
	return (start);
}
