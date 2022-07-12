/*
* Worked by ALX Student
* Mihretu and
* Senat
*/

#include "main.h"
/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}

#include "main.h"
/**
* print_unsig - function that prints unsigned number
* @u: unsigned number
* Descriptions: prints unsigned number with putchar
* Return: size the output
*/
int print_unsig(va_list u)
{
	unsigned int len, powten, j, digit, n, num;
	int count = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			_putchar(digit + '0');
			count++;
			n -= digit * powten;
			powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
