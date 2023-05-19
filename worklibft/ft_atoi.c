/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:52:01 by sansegur          #+#    #+#             */
/*   Updated: 2023/04/04 12:16:26 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//convierte una cadena a su valor numérico (enteros)
//1. saltar los espacios vacios. 
//2. el signo -/+, nos lo iguala a negativo.
//3. hacemos el cálculo ej.:resultado * 10 = 100 a este les sumamos STR[i] - 0 y nos da //109, el segundo 0 era 'the place holder de src[i] - 0

#include "libft.h"

int	ft_atoi(char *str)
{
	int				res;
	int				sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || str[i] >= 9  && str[i] <= 13)
		i++;
	if (str[i] == '-')
			sign = - 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	return ((int)(res * sign));
}

int	main(void)
{
	printf("%i\n", ft_atoi("d 2htwuuq	"));
	printf("%i\n", ft_atoi("125600"));
	printf("%i\n", ft_atoi("-2147483648"));
	return (0);
}

/*
int	main(int ac, char **av)
{
	int nuestro;
	int man;

	if (ac == 2)
	{
		nuestro = ft_atoi(av[1]);
		man = atoi(av[1]);
		printf("nuestro: %d\n man: %d\n", nuestro, man);
	}
	return (0);
}
*/
