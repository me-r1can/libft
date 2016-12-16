/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:48:56 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 16:54:06 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);

	printf("Mine: %i\nTheirs: %i\n", ft_strncmp(av[1], av[2], atoi(av[3])), strncmp(av[1], av[2], atoi(av[2])));
	return (0);
}