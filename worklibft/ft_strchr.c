/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:17:29 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/24 10:54:29 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}

int	main(void)
{
	printf("%s\n", ft_strchr("hola mundo", 'm'));
	printf("%s\n", ft_strchr("hola mundo", 'o'));
	printf("%s\n", ft_strchr("hola mundo", 'h'));
	return (0);
}
