/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnrepc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/10 10:56:51 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 11:32:54 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnrepc(char *s, char c, char rep, size_t n)
{
	size_t	nbrep;
	int		i;

	nbrep = 0;
	i = 0;
	while (s[i] && c && rep && n)
	{
		if (s[i] == c)
		{
			s[i] = rep;
			nbrep++;
			n--;
		}
		i++;
	}
	return (nbrep);
}
