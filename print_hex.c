/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:20:52 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/19 15:08:38 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n)
{
	char	*digits;
	int		count;

	count = 0;
	digits = "0123456789abcdef";
	if (n >= 16)
	{
		count += print_hex(n / 16);
	}
	count++;
	write(1, &digits[n % 16], 1);
	return (count);
}
