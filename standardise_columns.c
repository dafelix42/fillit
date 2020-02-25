/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   standardise_columns.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/27 13:51:59 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/26 23:24:03 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

/*
** Standardize the columns of the src string
** ft_standardisecolumnsif : To tie in the number of line in a function
** ft_standardisecolumnsfilldot : To tie in the number of line in a function
*/

int		ft_standardisecolumnsif(int j)
{
	if (j == 0 || (j != 3 && j != 4 && j != 8 && j != 9
				&& j != 13 && j != 14 && j != 18 && j != 19))
		return (1);
	return (0);
}

void	ft_standardisecolumnsfilldot(int i)
{
	g_sf->str[i + 3] = '.';
	g_sf->str[i + 8] = '.';
	g_sf->str[i + 13] = '.';
	g_sf->str[i + 18] = '.';
}

void	ft_standardisecolumns(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < g_sf->lngstr)
	{
		while (k <= 2 && g_sf->str[i] == '.' && g_sf->str[i + 5] == '.' \
				&& g_sf->str[i + 10] == '.' && g_sf->str[i + 15] == '.')
		{
			while (j < 19)
			{
				if (ft_standardisecolumnsif(j) == 1)
					g_sf->str[i + j] = g_sf->str[i + j + 1];
				j++;
			}
			ft_standardisecolumnsfilldot(i);
			j = 0;
			k++;
		}
		i = i + 21;
		k = 0;
	}
}
