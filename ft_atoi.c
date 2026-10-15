/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 09:16:05 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/14 08:08:13 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int ft_atoi(char const *str)
=======
int	ft_atoi(const char *nptr)
>>>>>>> a69c5e1 (new)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
<<<<<<< HEAD
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
=======
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
>>>>>>> a69c5e1 (new)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
<<<<<<< HEAD
		if (str[i] == '-')
=======
		if (nptr[i] == '-')
>>>>>>> a69c5e1 (new)
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
<<<<<<< HEAD
		result = result * 10 + (str[i] - '0');
=======
		result = result * 10 + (nptr[i] - '0');
>>>>>>> a69c5e1 (new)
		i++;
	}
	return (result * sign);
}
