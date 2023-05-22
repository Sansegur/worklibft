/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauralop <lauralop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:06:34 by lauralop          #+#    #+#             */
/*   Updated: 2023/05/22 12:59:49 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
static int	ft_num_word(const char *str, char div)
{
	int	i;
	int	total;
	i = 0;
	total = 0;
	while (str[i])
	{
		if ((str[i + 1] == div || str[i + 1] == '\0') && str[i] != div)
		{
			total++;
			while (str[i] == div)
				i++;
		}
		i++;
	}
	return (total);
}
static int	ft_len_word(const char *s, char c)
{
	int	i;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
static char	**ft_free(char **spl, int i)
{
	while (i >= 0)
	{
		free (spl[i]);
		i--;
	}
	free (spl);
	return (NULL);
}
char	**ft_split(const char *s, char c)
{
	char	**spl;
	int		words;
	int		i;
	int		j;
	i = 0;
	j = 0;
	words = ft_num_word(s, c);
	spl = (char **)malloc((words + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	while (i < words)
	{
		while (s[j] == c)
			j++;
		spl[i] = ft_substr(s, j, ft_len_word(&s[j], c));
		if (!spl[i])
			return (ft_free(spl, i));
		j = j + ft_len_word(&s[j], c);
		i++;
	}
	spl[i] = NULL;
	return (spl);
}
