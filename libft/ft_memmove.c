/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 14:10:26 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 20:39:55 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*tmp_src;
	unsigned char		*tmp_dst;

	tmp_src = (unsigned const char *)src;
	tmp_dst = (unsigned char *)dst;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		while (len-- > 0)
			*(tmp_dst + len) = *(tmp_src + len);
	return (dst);
}
