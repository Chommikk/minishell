#include <unistd.h>
#include <stdio.h>
#include "../minishell.h"


int	ft_cd(t_data *data, char *path)
{
	if (chdir(path) == -1)
	{
		data->rt = 1;
		return (printf("cd_errror\n"), 0);
	}
	data->rt = 0;
	return (1);
}
