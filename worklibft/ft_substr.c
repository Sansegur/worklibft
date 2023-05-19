/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:18:43 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/21 16:28:37 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;

	new_s = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!s || !new_s)
		return (0);
	while (i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] ='\0';
	return (new_s);
}

int	main (void)
{
	char	*new = "todo el dia perdido";
	size_t	start  = 4;
	size_t	len = 22;
	char *dst = substr(new, start, len);
	printf("%s\n", dst);
	return (0);
}	
/*
Esta función asigna memoria y devuelve una nueva copia de una parte del
 cadena pasada en el parámetro. La parte comienza en el parámetro de índice
 start y tendrá la longitud del parámetro len. Si start y len no designan una parte de una cadena válida, el comportamiento no está definido. Si él
la asignación de memoria falla, la función devolverá NULL.
Comenzamos declarando dos variables. El primero, i, será nuestro contador. y es un int sin signo para compensar la posibilidad de una cadena más larga que podría contar un int. También delcamos un char pointer str que contendrá nuestra nueva cadena que devolveremos.Establecemos nuestro contador en 0 porque lo compararemos con len en nuestra condición de bucle y asumimos que len será al menos 1. Luego, asigne memoria para nuestra cadena futura usando malloc.
NOTA: estamos usando la variable len para el tamaño de la asignación de memoria y agregando 1 para hacer un espacio para terminar nuestra nueva cadena con '\ 0' porque malloc toma el espacio literal necesario y las cadenas comienzan enposición 0. Luego verificamos para asegurarnos de que la tarea funcionó. Sí, no se pudo devolver NULL. Si no, continuamos con nuestro ciclo.
Comenzamos nuestro ciclo estableciendo una condición para que el ciclo dure mientras nuestro contador i sea menor que el parámetro dado len. Mientras esto sea
verdadero, entonces tomaremos la cadena de parámetros que comienza en el índice
posición dada por el parámetro de inicio y agregaremos el valor actual de nuestro contador i para movernos a lo largo de la cadena de parámetros
y coloque el carácter correspondiente en la nueva cadena. NOTA: Para usar i para movernos a través de nuestra cadena de parámetros, podemos comenzar en la posición 0 en nuestra nueva cadena y colocar el carácter en nuestro índice inicial deseado de cadena s en el espacio asignado de nuestra nueva cadena. Una vez que finalice el ciclo, agregaremos un '\ 0' de terminación a la nueva cadena y luego
devolverlo..
*/
