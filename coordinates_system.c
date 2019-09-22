#include "acsii.h"

void	init_coordinate_system(coordinate_system *cs, int scale_x, int scale_y)
{
	if (!cs)
		return ;
	ioctl(1, TIOCGWINSZ, &cs->ws);
	cs->scale_x = scale_x;
	cs->scale_y = scale_y;
}
