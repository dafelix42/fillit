/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   free_all.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/24 19:31:32 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/26 23:52:02 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	free_all(void)
{
	if (g_sf->db_tetri[0])
		free_db_tetri();
	if (g_sf->grid)
		free_grid();
	free(g_sf);
}

void	free_db_tetri(void)
{
	int i;
	int j;

	i = 0;
	while (i < 19)
	{
		j = 0;
		while (g_sf->db_tetri[i][j])
		{
			free(g_sf->db_tetri[i][j]);
			j++;
		}
		free(g_sf->db_tetri[i]);
		i++;
	}
}

void	free_grid(void)
{
	int	i;

	i = 0;
	while (i <= g_sf->size)
	{
		free(g_sf->grid[i]);
		i++;
	}
	free(g_sf->grid);
}
