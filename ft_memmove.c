/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:17:38 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/12 08:19:28 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void *ft_memmove(void *dst, void const *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
=======
void	*ft_memmove(void *dest, void const *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s > d)
>>>>>>> a69c5e1 (new)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
<<<<<<< HEAD
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dst);
}
=======
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}
>>>>>>> a69c5e1 (new)
