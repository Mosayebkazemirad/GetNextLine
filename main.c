/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 08:29:15 by username         #+#    #+#              */
/*   Updated: 2026/10/21 11:30:32 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	count;
	int	x;

	x = 42;
	count = ft_printf("String: %s\n", (char *) NULL);
	printf("count = %d\n\n", count);
	count = ft_printf("Pointer: %p\n", (void *) NULL);
	printf("count = %d\n\n", count);
	count = ft_printf("Char: %c\n", 'A');
	printf("count = %d\n\n", count);
	count = ft_printf("String: %s\n", "Hello 42");
	printf("count = %d\n\n", count);
	count = ft_printf("Pointer: %p\n", (void *) & x);
	printf("count = %d\n\n", count);
	count = ft_printf("Decimal: %d\n", -2147483648);
	printf("count = %d\n\n", count);
	count = ft_printf("Integer: %i\n", 12345);
	printf("count = %d\n", count);
	count = ft_printf("Lowercase: %x\n", 42u);
	printf("count = %d\n", count);
	count = ft_printf("Uppercase: %X\n", 42u);
	printf("count = %d\n", count);
	count = ft_printf("Unsigned: %u\n", 42u);
	printf("count = %d\n", count);
	count = ft_printf("Unsigned: %u\n", -1);
	printf("count = %d\n", count);
	count = ft_printf("Unsigned: %u\n", 0u);
	printf("count = %d\n\n", count);
	count = ft_printf("Unsigned: %u\n", 4294967295u);
	printf("count = %d\n\n", count);
	return (0);
}
