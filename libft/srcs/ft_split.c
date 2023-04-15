#include "../includes/libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	nb_words;

	nb_words = 0;
	while (*s)
	{
		while (*++s == c)
			;
		if (*s)
			nb_words++;
		while (*++s && *s != c)
			;
	}
	return (nb_words);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;

	if (!(s2 = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = -1;
	while (s1[++i] && i < n)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}

char        		**ft_split(char const *s, char c)
{
	size_t		nb_words;
	char		**result;
	size_t		i;
	size_t		len;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	i = -1;
	while (*s)
	{
		while (*s == c)
			s++;
		len = -1;
		while (s[++len] && s[len] != c)
			;
		if (len)
		{
			result[++i] = ft_strndup(s, len);
			if (!result[i])
			{
				while (--i)
					free(result[i]);
				free(result);
				return (NULL);
			}
			s += len;
		}
	}
	result[i] = NULL;
	return (result);
}

/*int main()
{
	char **res = ft_split("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed gravida pulvinar tortor, ut venenatis magna blandit ac. Etiam sit amet justo vitae odio venenatis tincidunt. Integer at mauris massa.", ' ');

	if (!res)
	{
		printf("Error: ft_split() returned NULL\n");
		return (1);
	}
	for (int i = 0; res[i] != 0; i++)
	{
		printf("%s\n", res[i]);
		free(res[i]);
	}
	free(res);
	return (0);
}*/