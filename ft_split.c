/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazemir <mkazemir@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 11:50:29 by mkazemir          #+#    #+#             */
/*   Updated: 2026/10/14 09:20:05 by mkazemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	in_word;
	int	count;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_split(char **split, int index)
{
	while (index > 0)
		free(split[--index]);
	free(split);
}

static int	split_t(char **split, char const *s, char c)
{
	size_t	i;
	int		start;
	int		index;

	i = 0;
	start = -1;
	index = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || s[i] == '\0') && start >= 0)
		{
			split[index] = word_dup(s, start, i);
			if (!split[index])
			{
				free_split(split, index);
				return (-1);
			}
			index++;
			start = -1;
		}
		i++;
	}
	return (index);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		index;

	if (!s)
		return (NULL);
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	index = split_t(split, s, c);
	if (index < 0)
		return (NULL);
	split[index] = NULL;
	return (split);
}
