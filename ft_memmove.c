/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:35:58 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 19:53:54 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cdst;
	char	*csrc;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	cdst = (char *)dst;
	csrc = (char *)src;
	if (dst > src)
		while (len-- > 0)
			cdst[len] = csrc[len];
	else
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	return (dst);
}
