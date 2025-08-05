#include "commands.h"
#include "../minishell.h"
#include "../libft/libft.h"

//check for valid strin that will be passed to this funcion
static int	arg_check(char *arg)
{
	//todo
	return (1);
}

int	ft_export(t_data *data, char *arg)
{
	size_t	i;
	char	**new;
	char	*var;

	if (arg_check(arg) == 0)
	{
		data->rt = 1;
		return (free(arg), 0); //error
	}
	var = ft_substr(arg, 0, (size_t)(ft_strchr(arg, '=') - arg));
	i = 0;
	ft_unset(data, var);
	if (ft_append_arr_str(&data->env, arg) == NULL)
		return (0); //error
	return (1);
}
