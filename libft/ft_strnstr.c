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
	while (little[i] && i < len)
	{
		if (!big[j])
			return (0);
		if (little[i] == big[j])
		{
			i++;
			j++;
		}
		j++;
	}
	return ((char *)big + j - i);
}
