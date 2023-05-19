/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:34:49 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/13 15:34:36 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s\n", (unsigned char *)ft_memchr("Barcelona", 'a', 9));
	printf("%s\n", (unsigned char *)ft_memchr("Barcelona", 'n', 9));
	printf("%s\n", (unsigned char *)ft_memchr("Barcelona", 'p', 9));
	return (0);
}

/*
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*car;
	size_t	i;

	tmp = (unsigned char *)str;
	car = (unsigned char *)c;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == car[i])
			return (tmp[i] + n);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s\n", (char *)ft_memchr("Barcelona", 'a', 9));
	printf("%s\n", (char *)ft_memchr("Barcelona", 'n', 9));
	printf("%s\n", (char *)ft_memchr("Barcelona", 'p', 9));
	return (0);
}
*/
