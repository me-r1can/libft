/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddby.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:18:36 by nlowe             #+#    #+#             */
/*   Updated: 2017/04/25 20:19:42 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstaddby(t_list **alst, t_list *new, int(*cmp)(t_list *, t_list *))
{
	t_list		*current;
	t_list		*previous;

	current = *alst;
	if (current == NULL || cmp(current, new) > 0)
	{
		new->next = *alst;
		*alst = new;
	}
	else
	{
		while (current != NULL)
		{
			previous = current;
			current = current->next;
			if (current == NULL || cmp(previous, new) > 0)
				ft_lstaddafter(previous, new);
		}
	}
}
