/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:12:32 by ljylhank          #+#    #+#             */
/*   Updated: 2024/11/19 13:40:03 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

char	*get_next_line(int fd);
char	*ft_strdup(char *s);
void	ft_setlength_cpy(char *dst, char *src, size_t min);
int		ft_find_charpos(char *s, int c);
int		allocate_more_buffer(char **buffer);
void	fill_with_zeroes(char *s, int min);

#endif
