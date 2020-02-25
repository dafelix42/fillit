/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 11:05:06 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 16:32:03 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*tmp_src;
	unsigned char		*tmp_dst;
	int					i;

	tmp_src = (unsigned const char *)src;
	tmp_dst = (unsigned char *)dst;
	i = 0;
	while (n-- > 0)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
