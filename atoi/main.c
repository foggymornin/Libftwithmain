/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:48:22 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/23 11:03:37 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac > 1)
	printf("%d\n", ft_atoi(av[1]));

	printf("%d\n", atoi(av[1]));
	
	return 0;
}