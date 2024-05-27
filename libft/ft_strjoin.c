/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:02:33 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/05/27 13:42:47 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	i;
	int	j;

	str = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1);
	if (!str)
	{
		return(NULL);
	}
	i = 0;
	while (s1 != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}

