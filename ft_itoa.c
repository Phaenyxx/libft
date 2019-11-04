/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 18:21:05 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 19:04:53 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void	reverse(char *str)
{
	int		i;
	int		j;
	char	t;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
		if (!(i % 2))
			j++;
	}
	i--;
	j--;
	while (j + 1)
	{
		t = str[j];
		str[j] = str[i - j];
		str[i - j] = t;
		j--;
	}
}

int			handle_negative(int *sign, int *n, char *str)
{
	if (*n < 0)
	{
		*sign -= 1;
		if (*n == -2147483648)
		{
			str[0] = '8';
			*n = 214748364;
			return (1);
		}
		*n *= -1;
	}
	return (0);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	sign = 0;
	i = 0;
	if (!(str = ft_calloc(12, sizeof(char))))
		return (NULL);
	i += handle_negative(&sign, &n, str);
	while (n > 9)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	str[i++] = (n % 10) + '0';
	if (sign < 0)
		str[i] = '-';
	reverse(str);
	return (str);
}
