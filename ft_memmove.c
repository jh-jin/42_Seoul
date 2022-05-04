/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:42:48 by jjin              #+#    #+#             */
/*   Updated: 2022/05/04 18:38:38 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	if (ps < pd)
	{
		pd = dest + n;
		ps = src + n;
		while (n--)
			*--pd = *--ps;
	}
	else
	{
		pd = dest;
		ps = src;
		while (n--)
			*pd++ = *ps++;
	}
}
