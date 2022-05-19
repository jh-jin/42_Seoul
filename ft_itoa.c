/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:01:49 by jjin              #+#    #+#             */
/*   Updated: 2022/05/19 22:25:16 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	ft_unsignedlen(int n)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*ret;

	sign = ft_check_sign(n);
	len = (int)ft_unsignedlen(n) + sign;
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	if (n == -2147483648)
		return ((char *)"-2147483648");
	if (sign)
	{
		ret[0] = '-';
		n *= -1;
	}
	ret[len--] = '\0';
	while (len--)
	{
		ret[len] = '0' + n % 10;
		n /= 10;
	}
	return (ret);
}
