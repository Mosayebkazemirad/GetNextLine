/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:41:00 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/12 07:25:04 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
size_t ft_strlen(char const *s)
=======
size_t	ft_strlen(char const *s)
>>>>>>> a69c5e1 (new)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
