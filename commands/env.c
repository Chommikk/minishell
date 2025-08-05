#include "commands.h"

int	ft_env(char **envp)
{
	size_t	i;

	i = 0;
	if (envp == NULL)
		return(1);
	while(envp[i] != NULL)
	{
		if (printf("%s\n", envp[i]) == -1)\
			return (printf("pritnf error\n"), 0);
		i ++;
	}
	return (1);
}

