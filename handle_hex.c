/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   handle_hex.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 11:30:21 by username         #+#    #+#              */
/*   Updated: 2026/10/21 11:30:22 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsigned_hex(va_list args, int uppercase)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (print_hex(n, uppercase));
}
