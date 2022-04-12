/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:13:50 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/11 10:37:19 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					k;
	unsigned char		*dstr;
	const unsigned char	*sstr;
	char				tmp[100];

	dstr = dest;
	sstr = src;
	k = 0;
	while (sstr[k])
	{
		*(tmp + k) = *(sstr + k);
		k++;
	}
	k = 0;
	while (k != n && sstr[k])
	{
		*(dstr + k) = *(tmp + k);
		k++;
	}
	*(dstr + k) = '\0';
	return (dstr);
}
