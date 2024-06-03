#include "../includes/fdf.h"

int	create_color(int c)
{
	int	t;
	int	r;
	int	g;
	int	b;
	int	nc;

	t = c >> 24 & 255;
	r = c >> 16 & 255;
	g = c >> 8 & 255;
	b = c & 255;
	nc = t << 24 | r << 16 | g << 8 | b;
		return (nc);
}

void	reset_colors(t_object *object, int *allow_flag, int stop)
{
	t_point	*point;
	int		i;

	point = object->points;
	*allow_flag = 0;
	i = 1;
	while (point && i < stop)
	{
		point->color = 0x00ffFFff;
		point = point->next;
		i++;
	}
}
