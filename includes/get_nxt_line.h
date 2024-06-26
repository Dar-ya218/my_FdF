/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nxt_line.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:42:03 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/30 14:47:40 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
int					found_newline(t_list *stash);
t_list				*ft_lst_get_last(t_list *stash);
int					read_and_stash(int fd, t_list **stash);
int					add_to_stash(t_list **stash, char *buf, int readed);
void				extract_line(t_list *stash, char **line);
void				generate_line(char **line, t_list *stash);
int					clean_stash(t_list **stash, int j);
int					ft_strlen(const char *str);
void				free_stash(t_list **stash, char *buf, t_list *node);

#endif
