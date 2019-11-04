/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 18:11:00 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 18:27:23 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < -9 || n > 9)
		ft_putnbr_fd(n < 0 ? -(n / 10) : n / 10, fd);
	ft_putchar_fd(n < 0 ? -(n % 10) + '0' : n % 10 + '0', fd);
}
