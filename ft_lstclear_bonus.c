/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 17:42:57 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 16:58:59 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *cursor;

	if (!(*lst) || !lst || !del)
		return ;
	while (*lst)
	{
		cursor = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cursor;
	}
}
