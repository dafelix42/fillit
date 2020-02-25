/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrepc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 17:32:50 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 11:33:10 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strrepc(char *s, char c, char rep)
{
	size_t	nbrep;
	int		i;

	nbrep = 0;
	i = 0;
	while (s[i] && c && rep)
	{
		if (s[i] == c)
		{
			s[i] = rep;
			nbrep++;
		}
		i++;
	}
	return (nbrep);
}
