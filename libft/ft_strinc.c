/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strinc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/09 12:09:11 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 13:47:30 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinc(const char *str, int i)
{
	int	nb;

	nb = 0;
	if ((ft_strisdigit((char *)str) == 1) || i != 0)
	{
		nb = ft_atoi(str);
		nb += i;
		str = (char *)ft_itoa(nb);
	}
	return ((char *)str);
}
