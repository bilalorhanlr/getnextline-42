/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:12:02 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 16:12:09 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);
char	*read_line(int fd, char *main_line);
char	*return_line(char *main_line);
char	*next_line(char *main_line);
char	*get_next_line(int fd);

#endif