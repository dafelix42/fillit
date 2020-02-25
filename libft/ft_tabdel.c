/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tabdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/10 15:45:12 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/28 14:31:39 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_tabdel(void **tab)
{
	void **start;

	if ((start = tab) == NULL)
		return (tab);
	while (*tab)
		free(*(tab++));
	free(start);
	return (NULL);
}
