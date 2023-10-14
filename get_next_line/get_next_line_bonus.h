/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:22:24 by axlee             #+#    #+#             */
/*   Updated: 2023/10/15 01:27:04 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <strings.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

/*Retrieves index of first appearance of i in s, or -1 */

int		ft_strchr_index(const char *s, int c);

/* Retrieves next line from given gile descriptor */

char	*get_next_line(int fd);

/* Allocates enough memory to make a copy of s from start, copying len bytes */

char	*ft_substr(char const*s, unsigned int start, size_t len);

/* Removes line from the static variable buf */

char	*ft_shrink_buffer(char *buff, char *line);

/* Performs a new read and adds it to static variable buf */

char	*ft_expand_buffer(char *buf, int fd);

/* Performs a new read and returns read string */

char	*ft_newread(int fd);

/* Returns length of the string */
size_t	ft_strlen(const char *s);

/* Copies chars from src to dst ensuring null-termination */

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/* Concatenates two strings, ensuing null-termination */

size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
