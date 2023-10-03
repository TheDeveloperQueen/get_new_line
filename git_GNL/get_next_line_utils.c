/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:23:13 by rivasque          #+#    #+#             */
/*   Updated: 2023/10/02 09:04:23 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin_buff(char *add_read, char *str_buff)
{
	size_t	total_len;
	char	*str;
	size_t	i;
	size_t	j;

	total_len = ft_strlen(add_read) + ft_strlen(str_buff);
	str = (char *) malloc((total_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	else
	{
		i = 0;
		j = 0;
		while (add_read && add_read[i] != '\0')
			str[j++] = add_read[i++];
		i = 0;
		while (str_buff[i] != '\0')
			str[j++] = str_buff[i++];
		str[j] = '\0';
	}
	free(add_read);
	return (str);
}

char	*ft_strdup(char *add_read)
{
	int		i;
	char	*line;

	i = 0;
	if (!add_read)
		return (NULL);
	line = (char *) malloc((ft_strlen(add_read) + 1) * sizeof(char));
	if (!line)
		return (NULL);
	else
	{
		while (add_read[i] != '\0')
		{
			line[i] = add_read[i];
			i++;
		}
		line[i] = '\0';
		return (line);
	}
}
