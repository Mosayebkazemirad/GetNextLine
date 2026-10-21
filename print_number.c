/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   print_number.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 14:21:13 by username         #+#    #+#              */
/*   Updated: 2026/10/21 11:30:45 by username        ###   ########.fr        */
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
