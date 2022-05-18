/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:29:02 by jjin              #+#    #+#             */
/*   Updated: 2022/05/18 21:29:26 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int			sign;
	long long	answer;

	answer = 0;
	sign = 1;
	while ((*str >= 7 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
		answer = answer * 10 + *str++ - '0';
	return ((int)(sign * answer));
}
