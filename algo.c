/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algo.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/22 10:49:07 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/24 22:05:50 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		check_piece(int i, int r, int c)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (g_sf->db_tetri[i][y])
	{
		while (g_sf->db_tetri[i][y][x])
		{
			if (g_sf->db_tetri[i][y][x] == '#' \
					&& g_sf->grid[r + y][c + x] != '.')
			{
				return (0);
			}
			else
				x++;
		}
		y++;
		x = 0;
	}
	return (1);
}

void	copy_tetri(int i_tetri, int r, int c)
{
	int y;
	int x;
	int i;

	y = 0;
	x = 0;
	i = g_sf->typ_f[i_tetri] - 1;
	while (g_sf->db_tetri[i][y])
	{
		while (g_sf->db_tetri[i][y][x])
		{
			if (g_sf->db_tetri[i][y][x] == '#')
				g_sf->grid[r + y][c + x] = g_sf->letter[i_tetri];
			x++;
		}
		x = 0;
		y++;
	}
	y = 0;
}

void	move_last_tetri(int i, int r, int c)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (g_sf->db_tetri[i][y])
	{
		while (g_sf->db_tetri[i][y][x])
		{
			if (g_sf->db_tetri[i][y][x] == '#')
				g_sf->grid[r + y][c + x] = '.';
			x++;
		}
		x = 0;
		y++;
	}
}

int		fillit(int row, int col, int i_tetri)
{
	int	index_db_tetri;

	index_db_tetri = g_sf->typ_f[i_tetri] - 1;
	if (i_tetri == g_sf->nb_tetris)
		return (1);
	while (row < g_sf->size)
	{
		while (col < g_sf->size)
		{
			if (check_piece(index_db_tetri, row, col))
			{
				copy_tetri(i_tetri, row, col);
				if (fillit(0, 0, i_tetri + 1) == 1)
					return (1);
				move_last_tetri(index_db_tetri, row, col);
			}
			col++;
		}
		col = 0;
		row++;
	}
	return (0);
}

int		algo_main(int size_plus, int row)
{
	if (!create_grid(size_plus, 0, 0))
		return (0);
	g_sf->size = ft_strlen(g_sf->grid[0]) - 1;
	g_sf->nb_point = g_sf->size * g_sf->size;
	if (fillit(0, 0, 0) == 0)
	{
		return (algo_main(size_plus + 1, 0));
	}
	else
	{
		while (g_sf->grid[row] && row < g_sf->size)
		{
			ft_putstr(g_sf->grid[row]);
			row++;
		}
	}
	return (1);
}
