/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   print_number.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mkazemir <mkazemir@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 12:10:26 by mkazemir         #+#    #+#              */
/*   Updated: 2026/10/21 12:10:26 by mkazemir        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += print_number(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	return (count + 1);
}
