#include <stdio.h>      // Para printf
#include <stdlib.h>     // Para malloc, free
#include <unistd.h>     // Para read, write, close, fork, execve, chdir, getcwd, dup, dup2, pipe, access, unlink, isatty, ttyname, ttyslot
#include <fcntl.h>      // Para open
#include <sys/wait.h>   // Para wait, waitpid
#include <sys/stat.h>   // Para stat, fstat, lstat
#include <signal.h>     // Para signal, kill, sigaction
#include <dirent.h>     // Para opendir, readdir, closedir
#include <string.h>     // Para strerror
#include <termios.h>    // Para tcsetattr, tcgetattr
#include <curses.h>

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (*s)
	{
		a++;
		s++;
	}
	return (a);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	p1;
	unsigned char	p2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i])
	{
		p1 = (unsigned char )s1[i];
		p2 = (unsigned char )s2[i];
		if (p1 > p2)
			return (1);
		if (p1 < p2)
			return (-1);
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i])
		return (1);
	else if (s2[i])
		return (-1);
	return (0);
}

void	do_echo(char **command)
{
	int i = 0;
	int n_all = 1;
	int j = 1;

	if (command[1] && command[1][0] == '-') {
		while (command[1][j]) {
			if (command[1][j] != 'n') {
				n_all = 0; 
				break;
			}
			j++;
		}
	}
	else
		n_all = 0; 
	if (n_all)
		i = 1;
	while (command[i++]) {
		printf("%s", command[i]);
		if (command[i + 1])
			printf(" "); 
	}
	if (!n_all)
		printf("\n"); 
}


int main(void)
{
	char *strings[] = {"echo", NULL};
	do_echo(strings);
}