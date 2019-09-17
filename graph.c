#include "acsii.h"

void	graph_line(coordinate_system cs, size_t m, size_t b)
{
	for (int i = 0; i < cs.ws.ws_col; i++)
	{
		for (int j = 0; j < cs.ws.ws_col; j++)
		{
			if (i == j * m + b)
				putchar('.');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
