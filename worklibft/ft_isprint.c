/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:23:14 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/13 15:33:07 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (ft_isprint(argv[1][0]))
	printf("Es printeable: %c\n", argv[1][0]);
	printf("No es printeable: %c\n", argv[1][0]);
	return (0);
}
