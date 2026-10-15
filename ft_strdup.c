/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:42:12 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/12 08:42:12 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*s2;
	size_t		size;

	size = ft_strlen(s) + 1;
	s2 = malloc(size);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s, size);
	return (s2);
}
