/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:32:06 by naratass          #+#    #+#             */
/*   Updated: 2025/10/11 22:39:00 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

char	*get_next_line(int fd);
char	*extract_line(char *stash);
char	*update_stash(char *stash);

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
int 	find_newline(const char *s);
size_t	get_stash_size(char *stash);
char	*ft_strdup(const char *s);
char	*get_stash(int fd, char *stash);

#endif