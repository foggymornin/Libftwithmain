/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:40:46 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/17 16:29:19 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int n)
{
	unsigned char c;

	c = (unsigned char)n;
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}