/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboia-pe <rboia-pe@student.42porto.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:19:58 by rboia-pe          #+#    #+#             */
/*   Updated: 2023/04/07 02:19:58 by rboia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		buf[FOPEN_MAX][BUFFER_SIZE + 1];
	char			*line;

	if (fd < 0 || FOPEN_MAX < fd)
		return (NULL);
	line = NULL;
	while (buf[fd][0] || read(fd, buf[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buf[fd]);
		if (ft_strlen(buf[fd]) == 0)
			return (line);
		if (ft_isolate_line(buf[fd]) == 1)
			break ;
		if (read(fd, buf[fd], 0) < 0)
		{
			free (line);
			return (NULL);
		}
	}
	return (line);
}

int	main(int ac, char **av)
{
	char	*line;
	int		i;
	int		fd;
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	int		fd5;
	int		fd6;
	int		fd7;
	int		fd8;
	int		fd9;
	int		fd10;
	int		fd11;
	int		fd12;
	int		fd13;
	int		fd14;
	int		fd15;
	int		fd16;
	int		fd17;
	int		fd18;
	int		fd19;
	int		fd20;
	int		fd21;

	fd1 = open("tests/test.txt", O_RDONLY);
	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/test3.txt", O_RDONLY);
	fd4 = open("tests/test.txt", O_RDONLY);
	fd5 = open("tests/test2.txt", O_RDONLY);
	fd5 = open("tests/test3.txt", O_RDONLY);
	fd6 = open("tests/test.txt", O_RDONLY);
	fd7 = open("tests/test2.txt", O_RDONLY);
	fd8 = open("tests/test3.txt", O_RDONLY);
	fd9 = open("tests/test.txt", O_RDONLY);
	fd10 = open("tests/test2.txt", O_RDONLY);
	fd11 = open("tests/test3.txt", O_RDONLY);
	fd12 = open("tests/test.txt", O_RDONLY);
	fd13 = open("tests/test2.txt", O_RDONLY);
	fd14 = open("tests/test3.txt", O_RDONLY);
	fd15 = open("tests/test.txt", O_RDONLY);
	fd16 = open("tests/test2.txt", O_RDONLY);
	fd17 = open("tests/test3.txt", O_RDONLY);
	fd18 = open("tests/test3.txt", O_RDONLY);
	fd19 = open("tests/test.txt", O_RDONLY);
	fd20 = open("tests/test2.txt", O_RDONLY);
	fd21 = open("tests/test3.txt", O_RDONLY);

	i = 1;
	if (ac > 1)
		fd = open(av[1], O_RDONLY);
	while (i < 8)
	{
		printf("fd: %d\n", fd);
		line = get_next_line(fd);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd4);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd5);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd6);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	puts("\n");
	if (ac > 1)
		close(fd);
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	close(fd5);
	close(fd6);
	close(fd7);
	close(fd8);
	close(fd9);
	close(fd10);
	close(fd11);
	close(fd12);
	close(fd13);
	close(fd14);
	close(fd15);
	close(fd16);
	close(fd17);
	close(fd18);
	close(fd19);
	close(fd20);
	close(fd21);
	return (0);
}