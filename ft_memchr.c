/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:32:16 by rmarceau          #+#    #+#             */
/*   Updated: 2022/10/24 15:40:15 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return (str + i);
	return (NULL);
}