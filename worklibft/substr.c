/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:41:43 by sansegur          #+#    #+#             */
/*   Updated: 2023/04/13 18:01:03 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*new_str;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (len > (s_len - start))
		len = s_len - start;
	if (start >= s_len)
	{
		new_str = (char *)malloc(1);
		if (new_str == NULL)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(new_str, s, len +1);
	return (new_str);
}
int	main (void)
{
	char	*new = "todo el dia perdido";
	size_t	start  = 4;
	size_t	len = 22;
	char *dst = ft_substr(new, start, len);
	printf("%s\n", dst);
	return (0);
}
/*
{
	size_t	i;
	char	*new_s;

	new_s = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !new_s)
		return (NULL);
	i = 0;
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		new_s[i] = s[start + i];i
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
*/
/*
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = start;
	new = (char *)malloc(len + 1);
	if (!s || !new)
		return (0);
	while (i < ft_strlen(s) && j < len)
	{
		new[j] = s[i];
		j++;
		i++;
	}
	new[j] = '\0';
	return (*new);
}
*/
