/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:19:20 by jjin              #+#    #+#             */
/*   Updated: 2022/05/18 21:30:36 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ret;

	len = ft_strlen(s);
	ret = (char *)malloc(len + 1);
	if (!ret || !ft_strlcpy(ret, s, len + 1))
		return (NULL);
	return (ret);
}
