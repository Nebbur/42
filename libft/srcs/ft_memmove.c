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

#include "../includes/libft.h"

static void    *ft_revmemcpy(void *dest, const void *src, size_t num)
{
    char            *dest_helper;
    const   char    *src_helper;

    dest_helper = dest + num - 1;
    src_helper = src + num - 1;
    while (num-- > 0)
        *dest_helper++ = *src_helper++;
    return (dest);
}

void    *ft_memmove(void *dest, const void *src, size_t num)
{
    if (!dest || !src)
        return (0);
    else if (dest < src)
        ft_memcpy(dest, src, num);
    else
        ft_revmemcpy(dest, src, num);
    return (dest);
}