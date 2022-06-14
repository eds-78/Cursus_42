/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 23:34:11 by ede-smet          #+#    #+#             */
/*   Updated: 2022/06/14 13:59:03 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_buff(int fd, char *data)
{
	char	*buf;
	int		r_buf;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	r_buf = 1;
	while (!ft_strchr(data, '\n') && r_buf != 0)
	{
		r_buf = read(fd, buf, BUFFER_SIZE);
		if (r_buf == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[r_buf] = '\0';
		data = ft_strjoin(data, buf);
	}
	free(buf);
	return (data);
}

char	*ft_clean_data(char *data)
{
	char	*str;
	int		i;

	i = 0;
	if (!data[i])
		return (NULL);
	i = ft_charindex(data, '\n');
	str = ft_substr(data, 0, i + 1);
	return (str);
}

char	*ft_prepare_next_line(char *data)
{
	int		i;
	char	*str;

	i = ft_charindex(data, '\n');
	if (!data[i])
	{
		free(data);
		return (NULL);
	}
	str = ft_substr(data, i + 1, ft_strlen(data));
	free(data);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*data;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	data = ft_read_buff(fd, data);
	if (!data)
		return (NULL);
	line = ft_clean_data(data);
	data = ft_prepare_next_line(data);
	return (line);
}

/* int	main(void)
{
	int	fd;
	int	i;

	i = 0;
	fd = open("get_next_line.h", O_RDONLY);
	while (i++ < 5)
		printf("%s", get_next_line(fd));
	return 0;
} */
