/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:12:19 by naratass          #+#    #+#             */
/*   Updated: 2025/10/12 23:38:58 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list ap, const char format);

int ft_printf(const char *format, ...)
{
	int		i;
	int		cnt;
	va_list	ap;

	if (!format)
		return (-1);
	i = 0;
	cnt = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			cnt += check_format(ap, format[i]);
		}
		else
			cnt += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (cnt);
}

int	check_format(va_list ap, const char format)
{
	if (format == 's')
		return (ft_fputstr(va_arg(ap, char *)));
	if (format == 'd' || format == 'i')
		return (ft_fputnbr_base(va_arg(ap, int), 10, 'd'));
	if (format == 'x')
		return (ft_fputnbr_base(va_arg(ap, int), 16, 'x'));
	if (format == 'X')
		return (ft_fputnbr_base(va_arg(ap, int), 16, 'X'));
	if (format == 'c')
		return (ft_fputchar(va_arg(ap, int)));
	if (format == 'p')
		return (ft_fputaddr(va_arg(ap, void *)));
	if (format == '%')
		return (ft_fputchar('%'));
	if (format == 'u')
		return (ft_funsignednbr(va_arg(ap, int)));
	return (ft_fputchar(va_arg(ap, int)));
}
// int ft_printf(const char *str, ...)
// {
// 	va_list args;
// 	int		count;
	
// 	va_start(args, str);
// 	while (!str) -> (str != NULL)
// 	{
// 		if (*str != '%' || *str != '/')
// 		{
// 			ft_putchar_fd(*str, 1);
// 			str++;
// 		}
// 		else
// 		{
// 			if (*str == '%')
// 			{
// 				str++;
// 				ft_printstr(*str, va_arg(args, int));
// 			}
// 		}
// 		count++;
// 	}
// 	va_end(args); 
// }

