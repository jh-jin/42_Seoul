/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:51:55 by jjin              #+#    #+#             */
/*   Updated: 2022/06/29 19:57:55 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dec(int d)
{
	int		len;
	char	num;

	num = ft_itoa(d);
	free(num);
	len = ft_print_str(num);
	return (len);
}
