/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/20 13:56:53 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 12:59:37 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	sp_bef;
	size_t	sp_aft;
	char	*new;
	size_t	len_new;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	sp_bef = 0;
	sp_aft = 0;
	while (s[sp_bef] == ' ' || s[sp_bef] == '\n' || s[sp_bef] == '\t')
		sp_bef++;
	while (sp_bef != len && (s[len - sp_aft - 1] == ' '\
				|| s[len - sp_aft - 1] == '\n' || s[len - sp_aft - 1] == '\t'))
		sp_aft++;
	len_new = len - sp_bef - sp_aft;
	new = ft_strsub(s, (unsigned int)sp_bef, len_new);
	return (new);
}
