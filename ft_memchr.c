/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:01:54 by jjin              #+#    #+#             */
/*   Updated: 2022/05/04 18:28:50 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cp;

	cp = (unsigned char *)s;
	while (n--)
	{
		if (*cp == (unsigned char)c)
			return (cp);
		cp++;
	}
	return (NULL);
}
