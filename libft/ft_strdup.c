/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 19:47:40 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:28:26 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s_copy;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	s_copy = NULL;
	s_copy = (char *)malloc(sizeof(*s_copy) * (len + 1));
	if (s_copy == NULL)
		return (NULL);
	ft_strcpy(s_copy, s1);
	return (s_copy);
}
