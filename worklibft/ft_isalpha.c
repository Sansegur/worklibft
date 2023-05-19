/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:16:52 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/07 18:26:23 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalpha('i'));
	printf("%d\n", ft_isalpha('8')); 
	return (0);
}
*/
/*
int	main(int argc, char **argv)
{
	if (ft_isalpha(argv[1][0]))
		printf("Es un caracter alfabetico: %c\n", argv[1][0]);
	else
		printf("NO es un caracter alfabetico: %c\n", argv[1][0]);
	return (0);
}
*/
