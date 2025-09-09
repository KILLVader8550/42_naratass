/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funisignednbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naratass <naratass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:46:01 by naratass          #+#    #+#             */
/*   Updated: 2025/09/09 12:46:25 by naratass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_funsignednbr(int n)
{
	unsigned int	u;

	u = (unsigned int)n;
	return (ft_fputnbr_base(u, 10, 'u'));
}
