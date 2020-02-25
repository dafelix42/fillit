/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 15:12:40 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 14:12:49 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = NULL;
	new = ft_memalloc(size + 1);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
