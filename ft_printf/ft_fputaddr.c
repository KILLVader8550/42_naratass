/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputaddr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:45:30 by naratass          #+#    #+#             */
/*   Updated: 2025/09/09 12:46:50 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_fputaddr(unsigned long n)
{
	int	cnt;

	cnt = ft_fputstr("0x");
	cnt += ft_fputnbr_base(n, 16, 'p');
	return (cnt);
}
