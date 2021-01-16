/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/29 12:00:48 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	
	char ptr1[20] = "Marouane fajat";
	const char ptr2[6] = "foggy";
	char r1[20] = "Marouane fajat";
	const char r2[6] = "foggy";
	//printf("%zu\n", strlcpy(NULL, ptr2, 10));
	//printf("%s\n", ptr1);

	printf("%zu\n", ft_strlcpy(NULL, r2, 10));
	printf("%s\n", r1);
}
