/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   handle_decimal.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mkazemir <mkazemir@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 12:10:04 by mkazemir         #+#    #+#              */
/*   Updated: 2026/10/21 12:10:04 by mkazemir        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_int(va_list args)
{
	int				n;
	unsigned int	num;
	int				count;

	n = va_arg(args, int);
	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = 0u - (unsigned int) n;
	}
	else
		num = (unsigned int) n;
	count += print_number(num);
	return (count);
}
