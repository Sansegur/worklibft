/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:06:56 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/13 16:50:27 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int main(int argc, char **argv)
{
	if (ft_isdigit(argv[1][0]))
		printf("Es un dígito: %c\n", argv[1][0]);
	else
		printf("NO es un dígito: %c\n", argv[1][0]);
	return (0);
}
*/
int	main(void)
{
	printf("%d\n", ft_isdigit('i'));
	printf("%d\n", ft_isdigit('7'));
	return (0);
}

