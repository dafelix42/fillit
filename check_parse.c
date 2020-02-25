/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_parse.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/27 13:07:02 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/24 22:15:23 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		initstruct(void)
{
	if (!(g_sf = (t_lstfillit *)malloc(sizeof(t_lstfillit))))
		return (0);
	ft_memset(g_sf, 0, sizeof(t_lstfillit));
	return (1);
}

int		testargc(int argc)
{
	if (argc != 2)
	{
		write(1, "usage: ./fillit source_file\n", 28);
		return (0);
	}
	return (1);
}

int		gettetris(char *filename, int fd)
{
	char	buf[1];
	int		i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	while (read(fd, buf, 1))
	{
		if (i < 545)
			g_sf->str[i] = *buf;
		else
		{
			g_sf->error_tetris = 1;
			break ;
		}
		i++;
	}
	g_sf->str[i] = '\0';
	if ((i < 20) || ((i - 20) % 21 > 0))
		g_sf->error_tetris = 1;
	g_sf->lngstr = i;
	if (g_sf->error_tetris == 1)
		return (0);
	return (fd);
}

void	ft_verifystrstructure(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_sf->lngstr)
	{
		if (j == 4 || j == 9 || j == 14 || j == 19 || j == 20)
		{
			if (g_sf->str[i] != '\n')
				g_sf->error_tetris = 1;
		}
		else if (g_sf->str[i] != '#' && g_sf->str[i] != '.')
			g_sf->error_tetris = 1;
		i++;
		j++;
		if (j == 21)
			j = 0;
	}
}

void	ft_parseverifystr(void)
{
	ft_verifystrstructure();
	ft_fillmodeltetri();
	ft_standardiselines();
	ft_standardisecolumns();
	ft_standardisestr();
	ft_searchtetri();
}
