/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:41:02 by marvin            #+#    #+#             */
/*   Updated: 2025/12/04 15:06:01 by mkacemi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	problem_argc(int argc);

int	problem_fd(int fd);

int	main(int argc, char **argv)
{
	int		fd;
	int		n;
	char	buffer[1];

	if (!problem_argc(argc))
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (! problem_fd(fd))
		return (1);
	n = 1;
	while (n != 0)
	{
		n = read(fd, buffer, sizeof(buffer));
		if (write(1, buffer, n) == -1)
		{
			close(fd);
			return (1);
		}
	}
	close(fd);
	return (0);
}
