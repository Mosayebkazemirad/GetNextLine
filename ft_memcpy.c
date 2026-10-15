/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:49:23 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/12 07:54:44 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void *ft_memcpy(void *dst, const void *src, size_t n)
=======
void	*ft_memcpy(void *dest, const void *src, size_t n)
>>>>>>> a69c5e1 (new)
{
	size_t i;

	if (n == 0)
<<<<<<< HEAD
		return (dst);
	if (!dst || !src)
=======
		return (dest);
	if (!dest && !src)
>>>>>>> a69c5e1 (new)
		return (NULL);
	i = 0;
	while (i < n)
	{
<<<<<<< HEAD
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
=======
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
>>>>>>> a69c5e1 (new)
