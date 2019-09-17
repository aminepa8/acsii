#include "acsii.h"

void	init_coordinate_system(coordinate_system *cs,
		coordinates center,
		double scale)
{
	if (!cs)
		return ;
	ioctl(1, TIOCGWINSZ, &cs->ws);
	cs->center = center;
	cs->scale = scale;
}
