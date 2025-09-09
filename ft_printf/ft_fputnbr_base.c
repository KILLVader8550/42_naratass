/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:45:45 by naratass          #+#    #+#             */
/*   Updated: 2025/09/09 13:03:31 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_fprint_nbrbase(char *buf, int cnt, const char format);

int	ft_fputnbr_base(long n, int base, const char format)
{
	int		cnt;
	char	buf[1024];

	cnt = 0;
	char *hex = "0123456789abcdef";
	if (n < 0)
	{
		{
			ft_fputchar('-');
			cnt++;
			n *= -1;
		}
	}
	while (n > 0)
	{
		buf[cnt] = hex[n % base];
		n /= base;
		cnt++;
	}
	ft_fprint_nbrbase(buf, cnt, format);
	return (cnt);
}

static void	ft_fprint_nbrbase(char *buf, int cnt, const char format)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		if (format == 'X')
			buf[cnt - i - 1] = ft_toupper(buf[cnt - i - 1]);
		write(1, &buf[cnt - i - 1], 1);
		i++;
	}
}
