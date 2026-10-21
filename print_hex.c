/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   print_hex.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mkazemir <mkazemir@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 12:10:21 by mkazemir         #+#    #+#              */
/*   Updated: 2026/10/21 12:10:21 by mkazemir        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n, int uppercase)
{
	char	*digits;
	int		count;

	count = 0;
	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	if (n >= 16)
		count += print_hex(n / 16, uppercase);
	count++;
	write(1, &digits[n % 16], 1);
	return (count);
}
