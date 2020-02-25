/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/01 18:31:44 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/02 11:53:44 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*begin_new;
	t_list	*before;

	begin_new = NULL;
	before = NULL;
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		if (!(new = ft_lstnew((void const *)lst->content, lst->content_size)))
			return (NULL);
		new = (*f)(new);
		if (!begin_new)
			begin_new = new;
		if (!before)
			before = new;
		else
		{
			before->next = new;
			before = before->next;
		}
		lst = lst->next;
	}
	return (begin_new);
}
