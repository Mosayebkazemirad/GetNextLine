/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 08:27:18 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/12 10:47:58 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	size;

	size = get_size(n);
	num = n;
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (num < 0)
		num = -num;
	while (size > 0)
	{
		str[--size] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	return (str);
}
