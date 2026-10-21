/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   handle_unsigned.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mkazemir <mkazemir@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 12:10:15 by mkazemir         #+#    #+#              */
/*   Updated: 2026/10/21 12:10:15 by mkazemir        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsigned(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (print_number(n));
}
