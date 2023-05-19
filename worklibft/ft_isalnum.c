/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:41:15 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/03 12:58:13 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum('p'));
	printf("%d\n", ft_isalnum('3'));
	return (0);
}
*/
int	main(int argc, char **argv)
{
	if (ft_isalnum(argv[0][1]))
		printf("%c\n", argv[0][1]);
	else 
		printf("%c\n", argv[0][1]);
	return (0);
}
