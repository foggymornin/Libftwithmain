/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 14:22:20 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	
	char a[20] = "Marouane fajat";
	const char aa[] = " foggy";
	char b[20] = "Marouane fajat";
	char bb[] = " foggy";
//	printf("%lu\n", ft_strlcat(b, NULL, 0));
	//printf("%lu\n", strlcat(NULL, b, 1));
	printf("%lu\n", ft_strlcat(a, aa, 20));
	printf("%lu\n", strlcat(b, bb, 20));
	return 0;
}
