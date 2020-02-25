/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoinfree.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/10 11:33:10 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/09 20:21:30 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char const *s1, char const *s2, int free)
{
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	if (!(new = ft_strjoin(s1, s2)))
		return (NULL);
	if (free == 1 || free == 3)
		ft_memdel((void *)s1);
	if (free == 2 || free == 3)
		ft_memdel((void *)s2);
	return (new);
}
