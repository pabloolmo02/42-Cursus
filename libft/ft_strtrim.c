/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:09:04 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/04/27 13:59:21 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     start;
    int     end;

    start = 0;
    if (!s1)
        return (ft_strdup(""));
    end = ft_strlen(s1);
    while (ft_strchr(set, s1[start]))
        start++;
    while (ft_strchr(set, s1[end]))
        end--;
    str = ft_substr(s1, start, (end -start) +1);
    return (str);
}