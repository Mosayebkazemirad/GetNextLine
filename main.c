/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 08:29:15 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/19 15:08:21 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		count;
	int		x;

	x = 42;
	count = ft_printf("Char: %c\n", 'A');
	printf("count = %d\n\n", count);
	count = ft_printf("String: %s\n", "Hello 42");
	printf("count = %d\n\n", count);
	count = ft_printf("Pointer: %p\n", (void *)&x);
	printf("count = %d\n\n", count);
	count = ft_printf("Decimal: %d\n", -2147483648);
	printf("count = %d\n\n", count);
	count = ft_printf("Integer: %i\n", 12345);
	printf("count = %d\n", count);
	return (0);
}
