/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:36:02 by sansegur          #+#    #+#             */
/*   Updated: 2023/04/05 16:48:56 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*Esta función es exactamente igual a nuestra función ft_putchar excepto que esta
 * la función requiere el descriptor de archivo de dónde escribir la salida como un
 * parámetro. Entonces, en lugar de escribir automáticamente en la salida estándar,
 * elegir si queremos usar un descriptor de archivo obtenido de la apertura
 * llamada al sistema, o usamos 0, 1 o 2, para referirnos a la entrada estándar, estándar
 * salida, o error estándar, respectivamente. Usamos la función de escritura como lo hicimos
 * en la función ft_putchar pero esta vez en lugar de tener la primera
 * parámetro de escritura sea un 1 para la salida estándar tomamos ft_putchar's
 * int fd parámetro y utilícelo como el primer parámetro para escribir. todavía usamos
 * la dirección de nuestra cadena de caracteres terminada en nulo char c como el contenido
 * para escribir, y todavía sabemos que escribiremos solo un carácter para
 * nuestro descriptor de archivo deseado, por lo que usamos 1 ya que escribiremos 1 byte.*/                                                                                                                               
