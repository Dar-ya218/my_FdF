/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:38:52 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/30 10:33:06 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *f, ...);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_nbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexadecimal(unsigned int num, char word);
int		ft_len_hexadecimal(unsigned int num);
int		ft_is_hexadecimal(unsigned int num, char word);
int		ft_print_hex_char(unsigned int nuum, char word);
int		ft_print_pointer(unsigned long long ptr);
int		ft_len_pointer(unsigned long long ptr);
int		ft_is_pointer(unsigned long long ptr);

#endif

