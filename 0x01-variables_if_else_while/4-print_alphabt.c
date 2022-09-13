#include <stdio.h>

<<<<<<< HEAD
/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

		char l;



			l = 'a';

				while (l <= 'z')

						{

									if ((l != 'e') && (l != 'q'))

												{

																putchar(l);

																			l++;

																					}

											else

														{

																		l++;

																				}

												}

					putchar('\n');

						return (0);

=======

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		if ((l != 'e') && (l != 'q'))
		{
			putchar(l);
			l++;
		}
		else
		{
			l++;
		}
	}
	putchar('\n');
	return (0);
>>>>>>> 4858abebadd689f0b40063b2508761e863011ac9
}
