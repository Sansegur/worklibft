/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:25:53 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/02 17:33:10 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rellena una zona de memoria con bites repetidos
// rellena el len (largo,6) que le digo en la memoria apuntada por *b con c (^)
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = c;
	return (b);
}

int	main(void)
{
	char	str[] = "Estoy cansada";

	printf("%s\n", ft_memset(str, '^', 6));
	return (0);
}

