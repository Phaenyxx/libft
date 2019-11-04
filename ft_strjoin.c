/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 19:15:01 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 16:04:42 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *st;

	if (!(st = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	ft_memcpy(st, s1, ft_strlen(s1));
	ft_memcpy(st + ft_strlen(s1), s2, ft_strlen(s2));
	*(st + ft_strlen(s1) + ft_strlen(s2)) = '\0';
	return (st);
}
