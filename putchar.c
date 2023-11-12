#include <unistd.h>
/**
 * _putchar - prints char c to standard output
 *@c: The character to be printed
 * Description: printing out character with putchar
 *
 * Return: 1 (Success)
 * -1 (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
