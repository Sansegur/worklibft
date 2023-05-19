/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:50:06 by sansegur          #+#    #+#             */
/*   Updated: 2023/05/19 14:22:16 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_nmb_wrd(char const *s, char c)
{
	int	i;
	int	nword;

	i = 0;
	cword = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			cword ++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nword)
}

static int	ft_len_wrd(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	ft_free(char const *s, int i)
{
	while (i >= 0)
	{
		free (s[i]);
		i--;
	}
	free (s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{

}
