#include "../includes/fdf.h"

void	set_default(t_fdf *param)
{
	param->scale = 20;
	param->z_scale = 1;
	param->is_isometric = 1;
	param->angle = 0.523599;
	param->win_x = 2000;
	param->win_y = 1000;
	param->shift_x = param->win_x / 3;
	param->shift_y = param->win_y / 3;
	param->mlx_ptr = mlx_init();
	param->img_ptr = mlx_new_image(param->mlx_ptr, param->win_x, param->win_y);
	param->win_ptr =\
	mlx_new_window(param->mlx_ptr, param->win_x, param->win_y, "FDF");
	param->win_ptr =
		mlx_new_window(param->mlx_ptr, param->win_x, param->win_y, "FDF");
	param->win_ptr = mlx_new_window(param->mlx_ptr, param->win_x, param->win_y,
			"FDF");
}

int	main(int ac, char **av)
{
	t_fdf **matrix;

	if (ac != 2)
		ft_error("error of ./fdf map.fdf");
	matrix = read_file(av[1]);
	set_default(matrix[0]);
	draw_matrix(matrix, (*matrix)->rows, (*matrix)->cols);
	mlx_key_hook((*matrix)->win_ptr, deal_key, matrix);
	mlx_loop((*matrix)->mlx_ptr);

}