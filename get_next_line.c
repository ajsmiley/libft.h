/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 20:36:01 by achavez           #+#    #+#             */
/*   Updated: 2019/02/02 21:07:44 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	place_data(const int fd, char **array, char **str, int rtn)
{
	int		character;
	char	*swap;

	character = 0;
	while (str[fd][character] != '\n' && str[fd][character] != '\0')
		character++;
	if (str[fd][character] == '\0')
	{
		if (rtn == BUFF_SIZE)
			return (get_next_line(fd, array));
		*array = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	else if (str[fd][character] == '\n')
	{
		*array = ft_strsub(str[fd], 0, character);
		swap = ft_strdup(str[fd] + character + 1);
		free(str[fd]);
		str[fd] = swap;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	return (1);
}

int	get_next_line(const int fd, char **array)
{
	int			bytes_read;
	char		*swap;
	char		buffer[BUFF_SIZE + 1];
	static char	*line[200];

	if (array == NULL || fd < 0)
		return (ERROR);
	while ((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		if (!line[fd])
			line[fd] = ft_strnew(1);
		buffer[bytes_read] = '\0';
		swap = ft_strjoin(line[fd], buffer);
		free(line[fd]);
		line[fd] = swap;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (bytes_read == 0 && (line[fd] == NULL || line[fd][0] == '\0'))
		return (0);
	if (bytes_read < 0)
		return (ERROR);
	return (place_data(fd, array, line, bytes_read));
}
