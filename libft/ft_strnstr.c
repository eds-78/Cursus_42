/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:07:33 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/12 16:07:33 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!little)
		return ((char *)big);
	while (little[i])
	{
		if (!big[j])
			return (0);
		while (little[i] == big[j] && j < len)
			{
				i++;
				j++;
			}
		j++;
	}
	if (i == ft_strlen((char *)little))
		return ((char *)big + j - i - 1);
	return (0);
}
