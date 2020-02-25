/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   standardise_lines.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/27 13:52:21 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/26 23:24:14 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

/*
** Standardize the lines of the src string
*/

void	ft_standardiselines(void)
{
	int i;
	int	j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < g_sf->lngstr)
	{
		while (g_sf->str[i] == '.' && g_sf->str[i + 1] == '.'
				&& g_sf->str[i + 2] == '.' && g_sf->str[i + 3] == '.' && k <= 2)
		{
			while (j++ < 14)
				g_sf->str[i + j - 1] = g_sf->str[i + j + 5 - 1];
			g_sf->str[i + j + 0] = '.';
			g_sf->str[i + j + 1] = '.';
			g_sf->str[i + j + 2] = '.';
			g_sf->str[i + j + 3] = '.';
			j = 0;
			k++;
		}
		i = i + 21;
		k = 0;
	}
}
