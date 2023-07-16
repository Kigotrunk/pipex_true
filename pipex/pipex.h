/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:40:04 by kortolan          #+#    #+#             */
/*   Updated: 2023/05/19 20:47:13 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "libft/libft.h"

char	*pathname(char **path, char *name);
char	*ft_strjoin2(char const *s1, char const *s2);
void	pip1(char *envp[], char **argv, int fd[]);
void	pip2(char *envp[], char **argv, int fd[]);
void	free_split(char **split);
#endif
