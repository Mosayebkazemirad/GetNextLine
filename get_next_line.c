/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   get_next_line.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mkazemir <mkazemir@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 10:23:47 by mkazemir         #+#    #+#              */
/*   Updated: 2026/10/22 14:40:44 by mkazemir        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	init_stash(char **stash)
{
	if (*stash)
		return (0);
	*stash = malloc(1);
	if (!*stash)
		return (-1);
	(*stash)[0] = '\0';
	return (0);
}

static int	append_buffer(char **stash, char *buffer)
{
	char	*new_stash;

	new_stash = ft_strjoin(*stash, buffer);
	if (!new_stash)
		return (-1);
	free(*stash);
	*stash = new_stash;
	return (0);
}

int	read_buffer(int fd, char **stash)
{
	char	*buffer;
	ssize_t	bytes_read;

	if (init_stash(stash) < 0)
		return (-1);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (-1);
	bytes_read = 1;
	while (!ft_strchr(*stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), -1);
		buffer[bytes_read] = '\0';
		if (bytes_read > 0 && append_buffer(stash, buffer) < 0)
			return (free(buffer), -1);
	}
	free(buffer);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (read_buffer(fd, &stash) < 0)
		return (NULL);
	if (!stash || !*stash)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	line = extract_line(stash);
	stash = update_stash(stash);
	return (line);
}
