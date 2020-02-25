/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/15 16:19:58 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 16:20:03 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char	*src2;
	unsigned char		*dst2;

	src2 = (unsigned const char *)src;
	dst2 = (unsigned char *)dst;
	while (n-- > 0)
	{
		if (*src2 != (unsigned char)c)
		{
			*dst2 = *src2;
			dst2++;
			src2++;
		}
		else
		{
			*dst2 = *src2;
			return (dst2 + 1);
		}
	}
	return (NULL);
}
