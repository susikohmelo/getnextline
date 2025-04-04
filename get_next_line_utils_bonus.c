/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:04:01 by ljylhank          #+#    #+#             */
/*   Updated: 2025/03/11 20:41:07 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	fill_with_zeroes(char *s, int min)
{
	int	i;

	i = 0;
	while (i < min)
		s[i++] = '\0';
}

void	ft_setlength_cpy(char *dst, char *src, size_t max)
{
	size_t	i;

	i = 0;
	if (max <= 0)
		return ;
	while (i < (max - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*newstr;

	i = 0;
	while (s[i])
		++i;
	newstr = (char *)malloc((i + 1) * sizeof(char));
	if (!newstr)
		return (newstr);
	i = 0;
	while (s[i])
	{
		newstr[i] = ((char *)s)[i];
		++i;
	}
	newstr[i] = '\0';
	return (newstr);
}

int	ft_find_charpos(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	allocate_more_buffer(char **buffer)
{
	char	*temp;
	int		i;

	i = 0;
	while ((*buffer)[i])
		++i;
	temp = *buffer;
	*buffer = malloc((i + BUFFER_SIZE + 1) * sizeof(char));
	if (!(*buffer))
	{
		free(temp);
		return (0);
	}
	fill_with_zeroes(*buffer + i, BUFFER_SIZE + 1);
	i = 0;
	while (temp[i])
	{
		(*buffer)[i] = temp[i];
		++i;
	}
	free(temp);
	return (1);
}
