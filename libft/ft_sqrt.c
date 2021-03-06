/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 19:32:46 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/29 17:39:43 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i != nb)
	{
		if ((i * i) > nb)
			return (i);
		else
			i++;
	}
	return (i);
}
