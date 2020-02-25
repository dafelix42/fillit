/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:50:33 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 16:10:43 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	while (n-- > 0)
	{
		*s = (unsigned char)c;
		s++;
	}
	return (b);
}
