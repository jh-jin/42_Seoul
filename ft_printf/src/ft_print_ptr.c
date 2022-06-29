/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:50:18 by jjin              #+#    #+#             */
/*   Updated: 2022/06/29 19:57:55 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(uintptr_t n)
{
	int	len;

	len += write(1, "0x", 2);
	if (!ptr)
		len += write(1, "0", 1);
	else
	{
		ft_put_hex('x', n);
		len += ft_hex_len(n);
	}
	return (len);
}
