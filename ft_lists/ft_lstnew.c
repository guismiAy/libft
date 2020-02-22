/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <gayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 08:00:06 by gayoub            #+#    #+#             */
/*   Updated: 2019/10/31 15:44:45 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nl;

	if (!(nl = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		nl->content = NULL;
		nl->content_size = 0;
	}
	else
	{
		if (!(nl->content = malloc(sizeof(content_size))))
		{
			free(nl);
			return (NULL);
		}
		ft_memcpy(nl->content, content, content_size);
		nl->content_size = content_size;
	}
	nl->next = NULL;
	return (nl);
}
