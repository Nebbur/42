#include "libft.h"

int main()
{
	/*char **res = ft_split(" | |Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed gravida pulvinar tortor, ut venenatis magna blandit ac. Etiam sit amet justo vitae odio venenatis tincidunt. Integer at mauris massa.| | ", ' ');*/
	char **res = ft_split("word omjnad ", ' ');

	if (!res)
	{
		printf("Error: ft_split() returned NULL\n");
		return (1);
	}
	for (int i = 0; res[i] != 0; i++)
	{
		printf("|%s|\n", res[i]);
		free(res[i]);
	}
	free(res);
	return (0);
}
