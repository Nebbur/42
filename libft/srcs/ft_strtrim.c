#include "../includes/libft.h"

static int      ft_match(char c, char const *set)
{
    int i;

    i = -1;
    while (set[++i])
        if (set[i] == c)
            return (1);
    return (0);
}

char                *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t j;

    if (!s1)
        return (NULL);
    i = -1;
    while (ft_match(s1[++i], set) == 1)
        ;
    j = ft_strlen(s1);
    if (i == j)
        return (ft_strdup(""));
    while (ft_match(s1[--j], set) == 1)
        ;
    j = (j + 1) - i;
    char *str = ft_substr(s1, i, j);
    return (str);
}