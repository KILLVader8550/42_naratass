/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:50:28 by naratass          #+#    #+#             */
/*   Updated: 2025/10/12 23:38:54 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_toupper(int c);
int		ft_fputchar(int c);
int		ft_fputstr(char *str);
int 	ft_fputaddr(void *ptr);
int 	ft_fputnbr_base(long n, int base, const char format);
int 	ft_funsignednbr(int n);

#endif
