/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:30:48 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/23 19:59:20 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//1. Verifiqua si *dest == *src, si es verdadero, devuelve el *dest.
// 2. Comprueba si el valor de n es 0, si es verdadero, devuelve el *dest.
// 3. Comprueba si *dest < *src, si es verdadero.
//		copia los bytes de *src  a *dest en orden.
// 4. Verifiqua si *dest  > *src, si es verdadero.
//		copia los bytes del *src al *dest en orden inverso.
// 5. Retorna *dest.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
/*
{
	if (len == 0 || dst == src)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			*(char *)(dst + len - 1) = *(char *)(src + len - 1);
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
*/
{
	size_t	i;

	i = 0;
	if (dst == src || !len)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dst + (len - 1)) = *((char  *)src + (len - 1));
			 len--;
		}
	}
	return (dst);
}

int	main(void)
{
	char dst[20] = "pepe";
	char src[20] = "pepai";

	printf("%s\n", ft_memmove(dst, src, 4));
	printf("%s\n", ft_memmove(dst, src, 3));
	printf("%s\n", ft_memmove(dst, src, 6));
	return (0);
}
