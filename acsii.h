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
	struct winsize	ws;
	int		scale_x;
	int		scale_y;
}	coordinate_system;

# define LEFT(cs) - cs.ws.ws_col / 2
# define UP(cs) cs.ws.ws_row / 2
# define RIGHT(cs) cs.ws.ws_col / 2
# define DOWN(cs) - cs.ws.ws_row / 2
# define SCALE(x, s) (x / s)

void	init_coordinate_system(coordinate_system *cs, int scale_x, int scale_y);
void	graph_line(coordinate_system cs, double m, double b);

#endif
