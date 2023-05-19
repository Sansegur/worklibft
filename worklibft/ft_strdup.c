/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:20:31 by sansegur          #+#    #+#             */
/*   Updated: 2023/04/05 13:58:38 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = (ft_strlen(s1) + 1);
	s2 = (char *)malloc(len);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}
/*
int main(int ac, char **av)
{
	char	*ft;
	char	*or;

	if (ac == 2)
		ft = ft_strdup(av[1]);
		or = strdup(av[1]);
		printf("%s\n%s\n", ft, or);
		return (0);
}
*/
