/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:50:28 by naratass          #+#    #+#             */
/*   Updated: 2025/09/09 13:50:32 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_toupper(int c);
int		ft_fputchar(int c);
int		ft_fputstr(char *str);
int 	ft_fputaddr(unsigned long n);
int 	ft_fputnbr_base(long n, int base, const char format);
int 	ft_funsignednbr(int n);

#endif
