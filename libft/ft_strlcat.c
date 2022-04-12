/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:42:05 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/11 10:43:30 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strsize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
			i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	p;

	i = 0;
	k = ft_strsize(dest);
	p = ft_strsize(src);
	if (size != 0 && size >= k)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[k + i] = src[i];
			i++;
		}
		dest[k + i] = '\0';
		return (k + p);
	}
	while (size != 0 && src[i] != '\0' && i < (size - 1))
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (size + p);
}
