/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:51:55 by jjin              #+#    #+#             */
/*   Updated: 2022/06/29 17:06:12 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_dec(int d)
{
	int		len;
	char	num;

	num = ft_itoa(d);
	free(num);
	len = ft_print_str(num);
	return (len);
}
