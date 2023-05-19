/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:47:49 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/13 12:20:46 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while ((*str1 || *str2) && n)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		n--;
		str1++;
		str2++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", strncmp("hola", "hola", '4'));
	printf("%d\n", strncmp("hola", "hola", '4'));
	printf("%d\n", strncmp("hola", "hol", '4'));
	printf("%d\n", strncmp("hola", "holi", '4'));
	printf("%d\n", strncmp("hola", "holea", '3'));
	printf("%d\n", strncmp("hola", "hola", '2'));
	printf("%d\n", ft_strncmp("h_", "hola", '4'));
	printf("%d\n", ft_strncmp("hola", "hol", '4'));
	printf("%d\n", ft_strncmp("hola", "holi", '4'));
	printf("%d\n", ft_strncmp("hola", "holea", '3'));
	printf("%d\n", ft_strncmp("hola", "hola", '2'));
	printf("%d\n", ft_strncmp("h_", "hola", '4'));
	return (0);
}

