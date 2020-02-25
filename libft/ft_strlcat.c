/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/27 10:00:35 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 16:26:20 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size < len_dst)
		return (len_src + size);
	while ((len_dst + i + 1) < size && src[i])
	{
		dst[len_dst + i] = (char)src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
