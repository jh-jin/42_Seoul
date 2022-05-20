/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:00:43 by jjin              #+#    #+#             */
/*   Updated: 2022/05/20 15:35:13 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcnt(char *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
	}
	return (cnt);
}

char	**ft_free_dptr(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i])
		free(ret[i]);
	free(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*wordstart;
	char	**ret;
	size_t	i;

	i = 0;
	ret = (char **)malloc(sizeof(char *) * (ft_wordcnt((char *)s, c) + 1));
	if (!ret)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			wordstart = (char *)s;
			while (*s && *s != c)
				s++;
			ret[i] = ft_substr(wordstart, 0, s - wordstart);
			if (!ret[i])
				return (ft_free_dptr(ret));
			i++;
		}
	}
	ret[i] = NULL;
	return (ret);
}
