/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countword.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 18:23:12 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 11:17:02 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	int		i;
	size_t	nb_word;
	int		is_new_word;

	i = 0;
	nb_word = 0;
	is_new_word = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && is_new_word == 1)
		{
			nb_word++;
			is_new_word = 0;
		}
		else if (s[i] == c)
			is_new_word = 1;
		i++;
	}
	return (nb_word);
}
