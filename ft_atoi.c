/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:29:02 by jjin              #+#    #+#             */
/*   Updated: 2022/05/20 22:59:46 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi_return(char *str, long long answer, long long sign, int len)
{
	if (sign == 1 && len > 19)
		return (-1);
	else if (sign == -1 && len > 19)
		return (0);
	while (*str >= '0' && *str <= '9')
		answer = answer * 10 + *str++ - '0';
	answer = sign * answer;
	if (sign == 1 && len == 19 && answer <= -1981284353)
		return (-1);
	if (sign == -1 && len == 19 && answer >= 1981284353)
		return (0);
	return ((int)answer);
}

int	ft_atoi(char *str)
{
	long long	sign;
	long long	answer;
	int			len;

	answer = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	len = ft_strlen(str);
	return (atoi_return(str, answer, sign, len));
}
