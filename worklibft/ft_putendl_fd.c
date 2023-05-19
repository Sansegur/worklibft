/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:50:22 by sansegur          #+#    #+#             */
/*   Updated: 2023/04/13 15:40:34 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
This function will display the string s on the standard output followed by a
 *'\n', which is a new line. We do this by using our ft_putstr and ft_putchar
 * functions that we previously made. We use our ft_putstr on our string s to
 * display it on the standard output. Then we use our ft_putchar to have our
 * string followed by a new line.*/
