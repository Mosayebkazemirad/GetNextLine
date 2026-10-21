/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mkazemir <mkazemir@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 12:09:29 by mkazemir         #+#    #+#              */
/*   Updated: 2026/10/21 12:09:29 by mkazemir        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	handle_unsigned_hex(va_list args, int uppercase);
int	ft_printf(const char *format, ...);
int	print_hex(unsigned long n, int uppercase);
int	print_number(unsigned int n);
int	handle_int(va_list args);
int	handle_unsigned(va_list args);

#endif
