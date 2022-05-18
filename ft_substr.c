/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:41:32 by jjin              #+#    #+#             */
/*   Updated: 2022/05/18 21:30:51 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	ret;

	ret = (char *)malloc(len + 1);
	if (!s || !ret)
		return (NULL);
	if ((size_t)start >= ft_strlen(s) || !(ft_strlcpy(ret, s + start, len + 1)))
		ret[0] = '\0';
	return (ret);
}
