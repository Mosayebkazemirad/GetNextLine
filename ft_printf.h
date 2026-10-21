/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 07:42:57 by username         #+#    #+#              */
/*   Updated: 2026/10/21 11:32:07 by username        ###   ########.fr        */
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
