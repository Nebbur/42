/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:19:58 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/04/07 02:19:58 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char                *ft_substr(char const   *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    size_t  j;
    size_t  s_size;

    i = start - 1;
    j = -1;
    s_size = ft_strlen(s);
    if (s == NULL)
        return (NULL);
    if (start > s_size)
        return (ft_strdup(""));
    while (s[++i] && ++j < len)
        ;
    str = malloc(sizeof(char) * j + 1);
    if (!str)
        return (NULL);
    i = start - 1;
    j = -1;
    while (++i < s_size && ++j < len)
        str[j] = s[i];
    str[j] = '\0';
    return (str);
}