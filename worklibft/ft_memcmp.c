/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:30:55 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/24 12:07:53 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//1.size_t guarda el valor de la memoria a comparar
//2.compara 2 strings
//3.devuelve 0, si las dos son idénticas
//si no devuelve la diferencia del primer bite de s1 y de s2 
//5. devuelve valor negativo si el primer byte es diferente S1 <s2
//6 Devuelve valor positiv si el primer byte es diferente s1> s2
//la diferencia entre las funciones str y mem: mem no tiene
//en cuenta el NULL, str tiene en cuenta el NULL
//un char se corresponde con la medida más pequeña bytes.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((str1[i]) - (str2[i]));
	}
	return (0);
}
/*
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i)
			== *((unsigned char *)s2 + i))
			i++;
		else
			return (*((unsigned char *)s1 + i)
				- *((unsigned char *)s2 + i));
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_memcmp("mandarina", "manzana", 5));
	printf("%d\n", memcmp("mandarina", "manzana", 5));
	printf("%d\n", ft_memcmp("caza", "caja", 5));
    printf("%d\n", memcmp("caza", "caja", 5));
	printf("%d\n", ft_memcmp("casita", "casita", 5));
	printf("%d\n", memcmp("casita", "casita", 6));
	return (0);
}
*/
