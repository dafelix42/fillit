/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   define_tetri.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/22 10:47:18 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/24 22:04:31 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	fill_shapes(void)
{
	g_sf->db_tetri[0] = ft_strsplit("#\n#\n#\n#", '\n');
	g_sf->db_tetri[1] = ft_strsplit("####", '\n');
	g_sf->db_tetri[2] = ft_strsplit(".##\n##.", '\n');
	g_sf->db_tetri[3] = ft_strsplit("#.\n##\n.#", '\n');
	g_sf->db_tetri[4] = ft_strsplit("##.\n.##", '\n');
	g_sf->db_tetri[5] = ft_strsplit(".#\n##\n#.", '\n');
	g_sf->db_tetri[6] = ft_strsplit("##\n##", '\n');
	g_sf->db_tetri[7] = ft_strsplit(".#\n.#\n##", '\n');
	g_sf->db_tetri[8] = ft_strsplit("#..\n###", '\n');
	g_sf->db_tetri[9] = ft_strsplit("##\n#.\n#.", '\n');
	g_sf->db_tetri[10] = ft_strsplit("###\n..#", '\n');
	g_sf->db_tetri[11] = ft_strsplit(".#.\n###", '\n');
	g_sf->db_tetri[12] = ft_strsplit("#.\n##\n#.", '\n');
	g_sf->db_tetri[13] = ft_strsplit("###\n.#.", '\n');
	g_sf->db_tetri[14] = ft_strsplit(".#\n##\n.#", '\n');
	g_sf->db_tetri[15] = ft_strsplit("#.\n#.\n##", '\n');
	g_sf->db_tetri[16] = ft_strsplit("###\n#..", '\n');
	g_sf->db_tetri[17] = ft_strsplit("##\n.#\n.#", '\n');
	g_sf->db_tetri[18] = ft_strsplit("..#\n###", '\n');
	return ;
}

int		define_type(void)
{
	fill_shapes();
	return (1);
}

void	set_alphabet(void)
{
	int	i;

	i = 0;
	while (i < 26)
	{
		g_sf->letter[i] = 'A' + i;
		i++;
	}
	g_sf->letter[i] = '\0';
}
