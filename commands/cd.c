#include <unistd.h>
#include <stdio.h>


int	ft_cd(char *path)
{
	if (chdir(path) == -1)
		return (printf("cd_errror\n"), 0);
	return (1);
}
