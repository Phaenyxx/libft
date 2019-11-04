/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 15:10:01 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 19:12:42 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	cdst = (char *)dst;
	csrc = (char *)src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if ((unsigned char)csrc[i] == (unsigned char)c)
			return (&cdst[i + 1]);
		i++;
	}
	return (NULL);
}
