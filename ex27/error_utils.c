/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:57:24 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/07 16:24:06 by mkacemi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	problem_argc(int argc)
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	return (1);
}

int	problem_fd(int fd)
{
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	return (1);
}
