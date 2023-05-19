/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:08:46 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/24 18:46:46 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[10] = "caracola";
	
	printf("%s\n", ft_memcpy(dst, "asa", 5));
	printf("%s\n", ft_memcpy(dst, "capa", 6));
	printf("%s\n", ft_memcpy(dst, "vuela", 2));
	printf("%s\n", ft_memcpy(dst, "hola", 4));
	printf("%s\n", memcpy(dst, "asa", 5));
	printf("%s\n", memcpy(dst, "capa", 6));
  	printf("%s\n", memcpy(dst, "vuela", 2));
  	printf("%s\n", memcpy(dst, "hola", 4));
	return (0);
}
*/
/*
int	main(void)
{
	char	dst[10] = "adios";

	printf("%s\n", ft_memcpy(dst, "hola", 5));
	return (0);
}
*/
