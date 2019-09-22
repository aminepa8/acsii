#include "acsii.h"

void	graph_line(coordinate_system cs, double m, double b)
{
	for (int i = UP(cs); i > DOWN(cs); i--)
	{
		for (int j = LEFT(cs); j < RIGHT(cs); j++)
		{
			if (i == j * m + b)
				putchar('.');
			else if (i == 0)
				putchar('-');
			else if (j == 0)
				putchar('|');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
