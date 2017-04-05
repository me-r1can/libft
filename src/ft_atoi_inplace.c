/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_inplace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 14:48:47 by nlowe             #+#    #+#             */
/*   Updated: 2017/04/05 14:51:45 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_inplace(const char *s, int *i)
{
	int		result;
	int		sign;
	char	*str;

	str = (char *)s;
	result = 0;
	sign = 1;
	while (ft_isspace(str[*i]))
		(*i)++;
	if (str[*i] == '+' && (ft_isdigit(str[*i + 1])))
		(*i)++;
	if (str[*i] == '-' && (ft_isdigit(str[*i + 1])))
	{
		sign = -1;
		(*i)++;
	}
	while (ft_isdigit(str[*i]))
	{
		result = (result * 10) + (str[*i] - 48);
		(*i)++;
	}
	return (sign * result);
}
