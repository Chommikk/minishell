#include "libft.h"
char	**ft_coppyarrstr(char **arr)
{
	size_t	i;
	char	**new;

	i = 0;
	while (arr[i])
		i ++;
	new = ft_calloc(i + 1, sizeof(char *));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		new[i] = ft_strdup(arr[i]);
		if (new[i] == NULL)
			return (free_arr((void ***)&new), NULL);
		i++;
	}
	new[i] = NULL;
	return (new);
}
