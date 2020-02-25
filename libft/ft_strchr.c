/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strchr.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 15:26:48 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 14:31:25 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while ((unsigned char)c != '\0' && (unsigned char)s[i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		else
			i++;
	}
	while ((unsigned char)c == '\0' && (unsigned char)s[i] != (unsigned char)c)
		i++;
	return ((char *)(s + i));
}
