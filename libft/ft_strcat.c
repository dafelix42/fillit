/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 10:03:54 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 16:21:06 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = (char)src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
