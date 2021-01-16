/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 10:21:05 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 12:23:17 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//void	*ft_memchr(const void *s, int c, size_t n);

int		main()
{
	char p[20] = "MarouaneFajat";

	char *a = "aaaaaaaaa";
	char *pouet = "z";
		char *lolzer = (char *)&pouet[2];
	char *str;	
	//str = memchr(a, 'a', 50);
	str = ft_memchr(pouet, 'a', 50);
	printf("%s\n", memchr(pouet, 'a', 50));	
	printf("%s\n", ft_memchr(pouet, 'a', 50));	
	return 0;
}
