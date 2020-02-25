/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbrbase.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 18:30:12 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 11:42:13 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrbase(int nb, int base)
{
	char *ba;

	ba = "0123456789abcdef";
	if (nb < base)
		ft_putchar(ba[nb]);
	else
	{
		ft_putnbrbase(nb / base, base);
		ft_putnbrbase(nb % base, base);
	}
}
