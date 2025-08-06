
#include "commands.h"

int	ft_pwd(void)
{
	char	*path;

	path = malloc(PATH_MAX);
	if (path == NULL)
		return (printf("malloc error \n"), free(path), 0);
	if (getcwd(path, PATH_MAX) == NULL)
		return (printf("get_cwd error \n"), free(path), 0);
	if (printf("%s\n", path) == -1)
		return (printf("printf_eror\n"), free(path), 0);
	return (free(path), 1);
}
