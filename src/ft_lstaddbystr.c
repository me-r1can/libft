/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddbystr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:18:36 by nlowe             #+#    #+#             */
/*   Updated: 2017/04/24 16:37:03 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstaddbystr(t_list **alst, t_list *new,
	int(*cmp)(const char *, const char *))
{
	t_list		*current;
	t_list		*previous;

	current = *alst;
	if (current == NULL || cmp((char *)current->content,
		(char *)new->content) > 0)
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
			if (current == NULL || cmp((char *)current->content,
				(char *)new->content) > 0)
			{
				previous->next = new;
				new->next = current;
			}
		}
	}
}
