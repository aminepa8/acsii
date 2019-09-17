#ifndef ACSII_H
# define ACSII_H

#include <sys/ioctl.h>
#include <stdio.h>

typedef	struct
{
	double x;
	double y;
}	coordinates;

typedef	struct
{
	struct winsize ws;
	coordinates center;
	double scale;
}	coordinate_system;

void	init_coordinate_system(coordinate_system *cs, coordinates center, double scale);
void	graph_line(coordinate_system cs, size_t m, size_t b);

#endif
