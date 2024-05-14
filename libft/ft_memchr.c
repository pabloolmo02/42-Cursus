/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:04:11 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/05/14 15:17:50 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	goal;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	goal = (unsigned char)c;
	while (i < n)
	{
		if (str [i] == goal)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
