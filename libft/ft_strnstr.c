/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 15:42:37 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/05 19:00:10 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_init;

	i = 0;
	j = 0;
	len_init = len;
	if (!needle[j])
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && len > 0)
	{
		while (haystack[i + j] == needle[j] && len > 0)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
			len--;
		}
		i++;
		len--;
		if (j != 0)
			len = len_init - i;
		j = 0;
	}
	return (NULL);
}
