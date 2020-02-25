/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   detect_tetri.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/27 13:47:47 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/24 17:00:32 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillmodeltetri(void)
{
	ft_strcatflt(g_sf->modeltetri, "#...#...#...#...~01~");
	ft_strcatflt(g_sf->modeltetri, "####............~02~");
	ft_strcatflt(g_sf->modeltetri, ".##.##..........~03~");
	ft_strcatflt(g_sf->modeltetri, "#...##...#......~04~");
	ft_strcatflt(g_sf->modeltetri, "##...##.........~05~");
	ft_strcatflt(g_sf->modeltetri, ".#..##..#.......~06~");
	ft_strcatflt(g_sf->modeltetri, "##..##..........~07~");
	ft_strcatflt(g_sf->modeltetri, ".#...#..##......~08~");
	ft_strcatflt(g_sf->modeltetri, "#...###.........~09~");
	ft_strcatflt(g_sf->modeltetri, "##..#...#.......~10~");
	ft_strcatflt(g_sf->modeltetri, "###...#.........~11~");
	ft_strcatflt(g_sf->modeltetri, ".#..###.........~12~");
	ft_strcatflt(g_sf->modeltetri, "#...##..#.......~13~");
	ft_strcatflt(g_sf->modeltetri, "###..#..........~14~");
	ft_strcatflt(g_sf->modeltetri, ".#..##...#......~15~");
	ft_strcatflt(g_sf->modeltetri, "#...#...##......~16~");
	ft_strcatflt(g_sf->modeltetri, "###.#...........~17~");
	ft_strcatflt(g_sf->modeltetri, "##...#...#......~18~");
	ft_strcatflt(g_sf->modeltetri, "..#.###.........~19~");
}

/*
** Recherche et renseignement du tetri trouve
*/

void	ft_savenumtetrifound(int k, char ret17, char ret18)
{
	g_sf->numtetri[0] = ret17;
	g_sf->numtetri[1] = ret18;
	g_sf->nb_tetris = k;
	g_sf->typ_f[k - 1] = ft_atoi(g_sf->numtetri);
}

void	ft_searchtetri(void)
{
	int		i;
	int		j;
	int		k;
	char	*ret;

	i = 0;
	j = 0;
	k = 0;
	while (i < g_sf->lngnewstr)
	{
		while (j < 17)
		{
			g_sf->strrech[j] = g_sf->newstr[i];
			j++;
			i++;
		}
		k++;
		ret = ft_strstr(g_sf->modeltetri, g_sf->strrech);
		if (ret == NULL)
			g_sf->error_tetris = 1;
		else
			ft_savenumtetrifound(k, ret[17], ret[18]);
		j = 0;
	}
}
