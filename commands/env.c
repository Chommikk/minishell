#include "commands.h"
#include "../minishell.h"

int	ft_env(t_data *data)
{
	size_t	i;

	i = 0;
	if (data->env == NULL)
		return(1);
	while(data->env[i] != NULL)
	{
		if (printf("%s\n", data->env[i]) == -1)\
		{
			data->rt = 1;
			return (0);
		}
		i ++;
	}
	return (1);
}

