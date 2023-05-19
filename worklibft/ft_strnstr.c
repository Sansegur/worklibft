/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:00:07 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/24 12:06:24 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// 1. Si la cadena está vacía to_find, devuelve la propia cadena s1.
// 2. Obtiene la longitud de la cadena para encontrar to_find
// 3. Itera a través de la cadena, si la longitud de la cadena s1 
// 		< longitud de la cadena to_find para stop.
// 4. Si la primera letra de la cadena = primera letra de la cadena a buscar
//		y el resto de la cadena = cadena para buscar, devuelve la cadena.
// 5. Si es falso devuelve NULL.

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t n)
{
	size_t	len;

	len = ft_strlen((char *)to_find);
	if (*to_find == '\0')
		return ((char *)s);
	while (*s && len <= n)
	{
		if (ft_memcmp(s, to_find, len) == 0)
			return ((char *)s);
		s++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s\n", ft_strnstr("hola que tal", "que", 9));	
	return (0);
}
