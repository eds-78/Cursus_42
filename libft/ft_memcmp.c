/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:55:03 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/12 15:55:03 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *p1, const void *p2, size_t n )
{
	char	*p_1;
	char	*p_2;
	int		i;

	i = 0;
	p_1 = (char *)p1;
	p_2 = (char *)p2;
	while (i < n)
	{
		if (p_1[i] == p_2[i])
			i++;
		else
			return (p_1[i] - p_2[i]);
	}
	return (0);
}
