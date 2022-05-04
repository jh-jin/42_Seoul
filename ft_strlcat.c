/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:11:07 by jjin              #+#    #+#             */
/*   Updated: 2022/05/04 22:25:16 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	di;
	size_t	si;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	else if (size < ft_strlen(dest))
		len += size;
	else
		len += ft_strlen(dest);
	di = 0;
	si = 0;
	while (dest[di])
		++i;
	while (src[si] && i < size - 1)
		dest[di++] = src[si++];
	dest[di] = '\0';
	return (len);
}
