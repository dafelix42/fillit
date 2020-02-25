/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/20 11:15:11 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 16:50:16 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (s == NULL)
		return (NULL);
	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = (char)s[start + i];
		i++;
	}
	return (new);
}
