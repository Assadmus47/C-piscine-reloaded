/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:57:24 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/06 19:52:52 by mkacemi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	problem_argc(int argc)
{
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		return (0);
	}
	if (argc == 1)
	{
		write(1, "File name missing.", 18);
		return (0);
	}
	return (1);
}

int	problem_fd(int fd)
{
	if (fd == -1)
	{
		write(1, "Cannot read file.", 17);
		return (0);
	}
	return (1);
}
