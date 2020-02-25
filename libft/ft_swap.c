/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_swap.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/10 16:31:04 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 14:08:48 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *ptr1, void *ptr2, size_t i)
{
	void	*tmp;

	if (!(tmp = ft_memalloc(i)))
		return ;
	ft_memcpy(tmp, ptr1, i);
	ft_memcpy(ptr1, ptr2, i);
	ft_memcpy(ptr2, tmp, i);
	free(tmp);
}
