/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   standardise_str.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/27 13:52:37 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/26 23:23:34 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

/*
** Standardise the tetriminos of the file in a delimited searchable string
*/

void	ft_standardisestr(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < g_sf->lngstr)
	{
		if (j == 4 || j == 9 || j == 14 || j == 19 || j == 20)
		{
			if (j == 20)
				g_sf->newstr[k++] = '~';
		}
		else
			g_sf->newstr[k++] = g_sf->str[i];
		i++;
		j++;
		if (j == 21)
			j = 0;
	}
	g_sf->newstr[k] = '\0';
	g_sf->lngnewstr = ft_strlen(g_sf->newstr);
}
