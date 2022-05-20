/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:16:45 by jjin              #+#    #+#             */
/*   Updated: 2022/05/20 17:02:51 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*news;
	t_list	*target;

	news = NULL;
	target = lst;
	while (*target)
	{
		tmp = ft_lstnew(f(target->content))
		if (!tmp)
		{
			ft_lstclear(&news, del);
			return (NULL);
		}
		ft_lstadd_back(&news, tmp);
		target = target->next;
	}
	return (news);
}
