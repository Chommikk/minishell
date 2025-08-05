#include "commands.h"
#include "../libft/libft.h"

static int	check_for_var(char ***envp, char **variable)
{
	size_t	i;
	size_t	j;
	char	*tmp;


	i = 0;
	j = 0;
	tmp = ft_strjoin(*variable, "=");
	if (tmp == NULL)
		return (0);
	while ((*envp)[i])
	{
		if (ft_strnstr((*envp)[i], tmp, ft_strlen(tmp)) == NULL)
			j ++;
		i ++;
	}
	return (free(tmp), j);
}

int		ft_unset(char ***envp, char *variable)
{
	size_t	i;
	size_t	j;
	char	*tmp;
	char	**new;

	i = check_for_var(envp, &variable);
	j = 0;
	tmp = ft_strjoin(variable, "=");
	if (tmp == NULL)
		return (0);
	new = ft_calloc(sizeof(void*), j);
	if (new == NULL)
		return (free(tmp), 0);
	while (envp[i])
	{
		if (ft_strnstr(envp[i], variable, ft_strlen(variable)) == NULL)
			new[j++] = *envp[i];
		else
			free(*envp[i]);
		i ++;
	}
	free(*envp);
	*envp = new;
	return (free(tmp), free(variable), 1);
}


