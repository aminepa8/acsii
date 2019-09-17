#include "acsii.h"

int main()
{
	coordinate_system cs;
	init_coordinate_system(&cs, (coordinates){0,0}, 1);
	graph_line(cs, 1, 0);

}
