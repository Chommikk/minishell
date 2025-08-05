#include "commands.h"

int	ft_echo(char *str, int flag)
{
	if (flag == 0 && printf("%s\n", str) == -1)
		return (free(str) ,0);
	if (flag == 1 && printf("%s", str) == -1)
		return (free(str) ,0);
	return (free(str), 1);
}
