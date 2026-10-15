/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:17:01 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/14 08:34:18 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	const unsigned char	*sc;
	size_t				i;

	sc = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)(sc + i));
		i++;
	}
	return (NULL);
}
