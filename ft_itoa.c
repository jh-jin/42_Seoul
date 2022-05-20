/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:01:49 by jjin              #+#    #+#             */
/*   Updated: 2022/05/20 22:49:52 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int2char(char *tmp, int n)
{
	int		i;
	int		sign;

	if (n == 0)
		tmp[0] = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	i = 0;
	while (n)
	{
		tmp[i++] = '0' + (n % 10) * sign;
		n /= 10;
	}
	if (sign == -1)
		tmp[i] = '-';
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		j;
	char	tmp[100];

	j = 0;
	i = ft_int2char(tmp, n);
	ret = (char *)malloc(i + 2);
	if (!ret)
		return (0);
	while (i >= 0)
		ret[j++] = tmp[i--];
	ret[j] = '\0';
	return (ret);
}
