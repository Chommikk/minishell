
#include "commands.h"

int	ft_pwd(void)
{
	char	*path;

	path = malloc(PATH_MAX);
	if (path == NULL)
		return (printf("malloc error \n"), 0);
	if (getcwd(path, PATH_MAX) == NULL)
		return (printf("get_cwd error \n"), 0);
	if (printf("%s\n", path) == -1)
		return (printf("printf_eror\n"), 0);
	return (1);
}
