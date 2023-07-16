/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:44:12 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/09 17:25:26 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char *envp[])
{
	int	pid1;
	int	pid2;
	int	fd[2];

	if (argc != 5)
		return (ft_putstr_fd("Invalid Number arguments", 2));
	if (pipe(fd) == -1)
		return (1);
	pid1 = fork();
	if (pid1 < 0)
		return (2);
	if (pid1 == 0)
		pip1(envp, argv, fd);
	pid2 = fork();
	if (pid2 < 0)
		return (3);
	if (pid2 == 0)
		pip2(envp, argv, fd);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	return (0);
}

void	pip1(char *envp[], char **argv, int fd[])
{
	char	*test;
	char	**split;
	int		file;

	file = 0;
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		perror("file");
		exit(EXIT_FAILURE);
	}
	test = pathname(envp, argv[2]);
	dup2(file, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	split = ft_split(argv[2], ' ');
	execve(test, split, envp);
	perror("Command");
	free(test);
	free_split(split);
}

void	pip2(char *envp[], char **argv, int fd[])
{
	char	**split;
	char	*test;
	int		file2;

	unlink(argv[4]);
	file2 = open(argv[4], O_WRONLY | O_CREAT, 0666);
	if (file2 == -1)
	{
		perror("file");
		exit(EXIT_FAILURE);
	}
	test = pathname(envp, argv[3]);
	dup2(fd[0], STDIN_FILENO);
	dup2(file2, 1);
	close(fd[0]);
	close(fd[1]);
	split = ft_split(argv[3], ' ');
	execve(test, split, envp);
	perror("Command");
	free (test);
	free_split(split);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free (split);
}

char	*pathname(char **path, char *name)
{
	int		i;
	int		j;
	char	**split;
	char	*temp;

	i = 0;
	j = 1;
	while (ft_strnstr(path[i], "PATH", 5) == NULL)
		i++;
	split = ft_split(path[i] + 5, ':');
	i = 0;
	while (split && split[i])
	{
		temp = ft_strjoin2(split[i], name);
		if (access(temp, F_OK | X_OK) == 0)
			break ;
		free (temp);
		i++;
		temp = NULL;
	}
	return (temp);
}
