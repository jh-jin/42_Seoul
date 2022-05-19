/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:01:56 by jjin              #+#    #+#             */
/*   Updated: 2022/05/19 22:34:39 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	i;

	ret = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !f || !ret)
		return (NULL);
	i = 0;
	while (s[i])
		ret[i] = f(i, s[i++]);
	ret[i] = '\0';
	return (ret);
}
