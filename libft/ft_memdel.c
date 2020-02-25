/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 15:07:29 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 11:59:13 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	unsigned char	**mem;

	if (ap == NULL)
		return ;
	mem = (unsigned char **)ap;
	free(*mem);
	*mem = NULL;
}
