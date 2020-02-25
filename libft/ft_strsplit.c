/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: davfelix <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 17:03:32 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/15 11:52:33 by davfelix    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_beginword(char const *s, char c, size_t begin)
{
	while (s[begin] == c && s[begin] != '\0')
		begin++;
	return (begin);
}

static size_t	ft_lenword(char const *s, char c, size_t begin, size_t len)
{
	while (s[begin + len] != c && s[begin + len] != '\0')
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nb_word;
	char	**result;
	size_t	i;
	size_t	begin;
	size_t	len;

	if (s == NULL)
		return (NULL);
	nb_word = ft_countword(s, c);
	if (!(result = (char **)malloc(sizeof(*result) * (nb_word + 1))))
		return (NULL);
	i = 0;
	begin = 0;
	len = 0;
	while (i < nb_word)
	{
		begin = ft_beginword(s, c, begin);
		len = ft_lenword(s, c, begin, len);
		result[i] = ft_strsub(s, begin, len);
		i++;
		begin = begin + len;
		len = 0;
	}
	result[i] = NULL;
	return (result);
}
