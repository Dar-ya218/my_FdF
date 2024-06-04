#include "../includes/fdf.h"
#include <../mlx/mlx.h>

t_line    *create_line(t_vector *start, t_vector *end, int color)
{
    t_line	*line;

    line = malloc(sizeof(t_line));
    if (line == NULL)
    {
        ft_printf("%s", "Error: malloc failed\n");
        return (NULL);
    }
    line->start = start;
    line->end = end;
    line->color = color;
    return (line);
}