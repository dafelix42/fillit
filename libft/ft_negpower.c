/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_negpower.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 17:54:14 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 11:40:44 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

float	ft_negpower(int nb, int power)
{
	int	i;
	int	sign;

	i = nb;
	sign = 1;
	if (power < 0)
	{
		power = -power;
		sign = -1;
	}
	if (nb == 1 || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else if (sign == 1)
		return (i * ft_negpower(nb, power - 1));
	else
		return (1 / (i * ft_negpower(nb, power - 1)));
}
