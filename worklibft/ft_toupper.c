/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:50:43 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/21 18:16:23 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	printf("%c\n", ft_toupper('g'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper('j'));
	printf("%c\n", ft_toupper(' '));
	return (0);
}
