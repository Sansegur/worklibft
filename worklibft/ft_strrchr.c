/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:43:43 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/24 11:04:35 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// recorre el str hasta el final (= que ft_strlen.c)
// en reverse busca c y si esta lo printea, y si no devuelve NULL
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s\n", ft_strrchr("hola mundo bonito", 'y'));
	printf("%s\n", ft_strrchr("hola mundo bonito", 'o'));
	printf("%s\n", ft_strrchr("hola mundo bonito", 'a'));
	printf("%s\n", ft_strrchr("hola mundo bonito", 'm'));
	return (0);
}

