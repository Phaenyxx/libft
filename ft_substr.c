/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:11:12 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 15:59:57 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*rs;

	i = 0;
	rs = malloc(sizeof(char) * len + 1);
	if (start > (unsigned)ft_strlen(s))
	{
		rs[0] = '\0';
		return (rs);
	}
	if (!rs)
		return (NULL);
	while (i < len)
	{
		rs[i] = s[start + i];
		i++;
	}
	rs[i] = 0;
	return (rs);
}
