/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_listnew.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/31 22:28:11 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/02 20:31:33 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		return (new);
	}
	if ((new->content = (void *)malloc(content_size)))
	{
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
