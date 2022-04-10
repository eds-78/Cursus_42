/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:24:09 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/10 16:01:06 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				k;
	unsigned char	*str;

	str = s;
	k = 0;
	while (k != n)
	{
		*(str + k) = (unsigned char)c;
		k++;
	}
	return (str);
}
