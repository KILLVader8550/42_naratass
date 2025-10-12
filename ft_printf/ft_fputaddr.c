/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputaddr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:45:30 by naratass          #+#    #+#             */
/*   Updated: 2025/10/12 13:12:20 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_fputaddr(void *ptr)
{
	int		cnt;
	uintptr_t n;

	if (ptr == NULL)
		return (ft_fputstr("(nil)"));
	n = (uintptr_t)ptr;
	cnt = ft_fputstr("0x");
	cnt += ft_fputnbr_base(n, 16, 'p');
	return (cnt);
}
