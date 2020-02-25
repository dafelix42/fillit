/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 16:49:01 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/08 14:17:10 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*s_copy;

	if (!(s_copy = (char *)malloc(sizeof(*s_copy) * (len + 1))))
		return (NULL);
	ft_strncpy(s_copy, s1, len);
	s_copy[len] = '\0';
	return (s_copy);
}
