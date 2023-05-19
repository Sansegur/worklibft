/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
// 1. ft_strlcat() es una función para concatenar dos cadenas.
// 2. Toma tres parámetros: cadena dst, cadena src y tamaño de la cadena dest.
// 3. Agrega la cadena src a la cadena dst.
// 4. Devuelve la longitud de la nueva cadena.
// 5. Devuelve la longitud de la nueva cadena, 
// 		pero no más que el tamaño de la cadena dst.
// 6. Copia el byte nulo de terminación de la cadena src a la cadena dst.
// 7. No devuelve nada si el tamaño de la cadena dst = 0.
// 8. Devuelve la longitud de la cadena src si la longitud de la
// 		 cadena src > tamaño de la cadena dst.
// 9. No devuelve nada si la longitud de la cadena src > cadena dst.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

int	main(void)
{
	char	dst[20] = "333";
	char	src[20] = "4444";

	printf("%zu\n", ft_strlcat(dst, src, 8));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, 4));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, 1));
	printf("%s\n", dst);
	return (0);
}


