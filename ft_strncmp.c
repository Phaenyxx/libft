/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 17:17:19 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 15:55:51 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n < 1)
		return (0);
	while ((*(s1++) == *(s2++)) && n-- > 1)
		if (!*s1)
			return (*s1 - *s2);
	return ((unsigned char)(*(s1 - 1)) - (unsigned char)(*(s2 - 1)));
}
