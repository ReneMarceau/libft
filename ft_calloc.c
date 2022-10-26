/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:51:14 by rmarceau          #+#    #+#             */
/*   Updated: 2022/10/26 19:52:54 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total;
	char	*ptr;

	i = 0;
	total = count * size;
	ptr = (void *)malloc(total);
	if (!ptr)
		return (NULL);
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
