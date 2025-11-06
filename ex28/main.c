/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:41:02 by marvin            #+#    #+#             */
/*   Updated: 2025/11/06 14:41:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd;
	int	n;
	int	buffer[1024];

	if (argc > 2)
	{
		write(1, "Too many arguments.",19);
		return (0);
	}
	if(argc == 1)
	{
		write(1, "File name missing.", 18);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{	
		write(1, "Cannot read file.", 17);
		return (0);
	}
	n = read(fd, buffer, sizeof(buffer));
	write(1 , buffer, n);
	close(fd);	

}