/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:59:21 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/10 22:12:36 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int					k;
	unsigned char		*dstr;
	const unsigned char	*sstr;

	dstr = dest;
	sstr = src;
	k = 0;
	while (k != n && sstr[k])
	{
		*(dstr + k) = *(sstr + k);
		k++;
	}
	*(dstr + k) = '\0';
	return (dstr);
}
