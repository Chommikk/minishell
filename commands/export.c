#include "commands.h"
#include "../minishell.h"
#include "../libft/libft.h"

int	ft_export(t_data *data, char *arg)
{
	size_t	i;
	char	**new;
	char	*var;

	var = ft_substr(arg, 0, (size_t)(ft_strchr(arg, '=') - arg));
	i = 0;
	ft_unset(data, var);
	if (ft_append_arr_str(&data->env, arg) == NULL)
		return (0); //error
	return (1);
}
