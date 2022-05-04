/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:13:02 by jjin              #+#    #+#             */
/*   Updated: 2022/05/04 16:38:26 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t n, size_t size)
{
	void	*ret;

	ret = (void *)malloc(n * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, cnt * n);
	return (ret);
}
