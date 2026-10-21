/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   handle_hex.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mkazemir <mkazemir@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 12:10:10 by mkazemir         #+#    #+#              */
/*   Updated: 2026/10/21 12:10:10 by mkazemir        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsigned_hex(va_list args, int uppercase)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (print_hex(n, uppercase));
}
