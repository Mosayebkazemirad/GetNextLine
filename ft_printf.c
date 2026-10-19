/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 07:50:45 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/19 15:10:46 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

static int	handle_string(va_list args)
{
	char	*str;
	int		i;

	str = va_arg(args, char *);
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

static int	handle_pointer(va_list args)
{
	unsigned long	n;
	void			*ptr;
	int				count;

	ptr = va_arg(args, void *);
	n = (unsigned long)ptr;
	write(1, "0x", 2);
	count = 2 + print_hex(n);
	return (count);
}

static int	handle_format(va_list args, char c)
{
	if (c == 'c')
		return (handle_char(args));
	if (c == 's')
		return (handle_string(args));
	if (c == 'p')
		return (handle_pointer(args));
	if (c == 'd' || c == 'i')
		return (handle_int(args));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format(args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
