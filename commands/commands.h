#ifndef COMMANDS_H
# define COMMANDS_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include "../minishell.h"

// changes working directory to given path
// works with absolute and relative paths
int	ft_cd(char *path);
//prints current directory to stdout
int	ft_pwd(void);
// takes null terminated formated string
// frees it after using dont give NULL
// flag == 0 no flag is given
// flag == 1 -n flag is given
// prints the given strint to stdout
int	ft_echo(char *str, int flag);
// prints given environment
int	ft_env(t_data *data);
// takes adres of alocated array of alocated strings copies all of 
// the env variables except the given one which will be freed
// and modifies the given argument 
int		ft_unset(t_data *data, char *variable);
//takes malloced string as argument changes the env is string is correctly formated 
//sets exit value in struct
int	ft_export(t_data *data, char *arg);
#endif
