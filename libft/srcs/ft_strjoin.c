#include "../includes/libft.h"

char                *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     j;
    char    *str;

    i = -1;
    j = -1;
    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (NULL);
    if (s1 == 0 && s2 == 0)
        return (NULL);
    while (s1[++j])
        str[++i] = s1[j];
    j = -1;
    while (s2[++j])
        str[++i] = s2[j];
    str[i] = '\0';
    return (str);
}