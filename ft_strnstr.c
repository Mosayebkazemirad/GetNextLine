/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:15:39 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/12 09:27:23 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	size_t	pos;
	size_t	i;

	if (!*little)
		return ((char *)big);
	pos = 0;
	while (big[pos] && pos < len)
	{
		if (big[pos] == little[0])
		{
			i = 1;
			while (pos + i < len && little[i] && big[pos + i] == little[i])
				i++;
			if (little[i] == '\0')
				return ((char *)&big[pos]);
		}
		pos++;
	}
	return (NULL);
}
