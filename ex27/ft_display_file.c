/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy <alamy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:28:30 by alamy             #+#    #+#             */
/*   Updated: 2017/11/07 18:33:17 by alamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

# define BUF_SIZE 4096

int	main(int argc, char **argv)
{
	int fd;
	int ret;
	char chaine[BUF_SIZE + 1];

	if (argc > 2)
	write(2, "Too many arguments.\n", 19);

	if (argc == 1)
	write(2, "File name missing.\n", 19);
	
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "open() failed\n", 15);
		}
		while((ret = read(fd, chaine, BUF_SIZE)) > 0)
		{
			chaine[ret] = '\0';
			write(1, chaine, ret);
		}
		close(fd);
	}
	return(0);
}