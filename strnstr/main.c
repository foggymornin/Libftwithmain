/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:55:40 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 12:41:20 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	const char a[] = "matrwanfajat";
	const char b[] = "t\0abon";

	printf("%s\n", strnstr(a, b, 30));
	printf("%s\n", ft_strnstr(a, b, 30));
}
