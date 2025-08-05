#include "libft.h"
char	*ft_strjoinf1(char *fr, char const *str)
{
	char	*tmp;

	tmp = ft_strjoin(fr, str);
	free(fr);
	return (tmp);
}
