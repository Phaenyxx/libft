/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 16:23:56 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 14:39:40 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	words;
	int	in;

	in = 0;
	i = 0;
	words = 1;
	while (s[i])
	{
		if (s[i] == c && in)
		{
			while (s[i] == c)
				i++;
			if (s[i])
				words++;
			i--;
		}
		in = (s[i] != c) ? 1 : 0;
		i++;
	}
	return (words);
}

static char	*ft_strdupsplit(const char *src, char c)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len] && src[len] != c)
		len++;
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void		cleanup(char **t, int n)
{
	while (n >= 0)
		free(t[n - 1]);
	free(t);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	char	**ar;
	int		words;

	i = 0;
	n = 0;
	words = ft_countwords(s, c);
	if (!(ar = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		ar[0] = NULL;
	while (s[i])
	{
		if (!(ar[n++] = ft_strdupsplit(s + i, c)))
			cleanup(ar, n);
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	ar[words] = NULL;
	return (ar);
}
