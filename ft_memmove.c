/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:42:48 by jjin              #+#    #+#             */
/*   Updated: 2022/05/20 19:02:16 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = dest;
	ps = src;
	if (ps > pd)
		while (n--)
			*pd++ = *ps++;
	else
	{
		pd += n;
		ps += n;
		while (n--)
			*--pd = *--ps;
	}
	return (dest);
}
