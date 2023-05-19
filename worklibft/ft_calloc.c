/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:33:01 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/24 20:53:27 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, i);
	return (ptr);
}
*/

void	*ft_calloc(size_t nobj, size_t size)
{
	char *s1;

	s1 = (char *)malloc(nobj * size);
	if (s1 == NULL)
		return (NULL);
	ft_bzero(s1, (nobj * size));
	return (s1);
}

/*
void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < (count * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
int	main(void)
{
	char	*s;

	s = ft_calloc(8, 4);
	printf("%s\n", s);
	return (0);
}
*/
