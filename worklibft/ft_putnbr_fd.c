/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:24:44 by sansegur          #+#    #+#             */
/*   Updated: 2023/05/15 13:25:42 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Comprueba si int < 0. 
// 		Si es verdadero convierte a postivo multiplicando por '-1'.
// 		Convierte a unsigned int y agrega '-' al principio.
// 2. Si num > 0, covierta a unsigned int.
// 3. Si num < 10, llamar a la funcion  recursivamente.
// 		Con num /10 para imprimir num en orden inverso.
// 4. Imprime el ultimo digito (primer digito en el numero invertido) en %10.
// 		Luego agregue 48 para obtener el valor ASCII del digito, luego 
// 			convierte a char e imprime.

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
