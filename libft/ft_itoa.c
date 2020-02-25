/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/26 14:50:32 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 11:58:46 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(unsigned int nb, int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	len = ft_len(nb, n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	while (len > 0 && nb > 0)
	{
		str[len - 1] = (nb % 10 + '0');
		nb = nb / 10;
		len--;
	}
	return (str);
}
