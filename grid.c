/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   grid.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/22 10:48:23 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/25 19:53:18 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		only_sqr(void)
{
	int j;

	j = 0;
	while (g_sf->typ_f[j] == 7)
		j++;
	if (j == g_sf->nb_tetris)
		return (1);
	return (0);
}

void	define_size(int size_plus)
{
	g_sf->size = ft_sqrt((g_sf->nb_tetris) * 4) + size_plus;
	if (only_sqr() && g_sf->size % 2 == 1)
		g_sf->size++;
}

int		malloc_grid(int row, int col)
{
	int	c;

	if (!(g_sf->grid = ((char **)malloc(sizeof(char *) * (g_sf->size + 1)))))
		return (0);
	c = g_sf->size + 1;
	while (row < g_sf->size)
	{
		if (!(g_sf->grid[row] = ((char *)malloc(sizeof(char) * (c + 1)))))
			return (0);
		while (col < c - 1)
		{
			g_sf->grid[row][col] = '.';
			col++;
		}
		g_sf->grid[row][col] = '\n';
		g_sf->grid[row][col + 1] = '\0';
		row++;
		col = 0;
	}
	g_sf->grid[row] = (char *)malloc(c + 1);
	ft_memset(g_sf->grid[row], '\0', c + 1);
	return (1);
}

int		create_grid(int size_plus, int row, int col)
{
	if (g_sf->grid != NULL)
		free_grid();
	define_size(size_plus);
	return (malloc_grid(row, col));
}
