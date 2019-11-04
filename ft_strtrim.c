/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 19:36:43 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 20:12:27 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_trim(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

char		*ft_strtrim(char *str, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	if (!(trim = malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && is_trim(str[i], set))
		i++;
	if (!str[i])
	{
		trim[0] = '\0';
		return (trim);
	}
	while (str[i])
		trim[j++] = str[i++];
	trim[j] = '\0';
	j--;
	while (is_trim(trim[j], set))
		trim[j--] = '\0';
	return (trim);
}
