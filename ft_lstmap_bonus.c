/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: trifflet <trifflet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 17:42:29 by trifflet     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 16:54:53 by trifflet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;
	t_list *control;

	if (!lst || !f || !del)
		return (NULL);
	if (!(list = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if ((control = ft_lstnew(f(lst->content))))
			ft_lstadd_back(&list, control);
		else
			ft_lstclear(&list, del);
		lst = lst->next;
	}
	return (list);
}
