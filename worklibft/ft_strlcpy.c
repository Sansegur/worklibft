/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:38:29 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/24 10:43:43 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dst == 0 || src == 0)
		return (0);
	if (dstsize > 0)
	{
		while (i < (dstsize -1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*	if (src[len] != '\0')
		len++;
	if (dstsize == 0)
		return (len);
	else if (dstsize != 0)
	{
		while (len != '\0' && i < (dstsize -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
*/
int	main(void)
{
	char	dst[20] = "";
	char	src[20] = "main is a nightmare";

	printf("%zu\n", ft_strlcpy(dst,src, 8));
}
