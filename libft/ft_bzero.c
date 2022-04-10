/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:53:43 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/10 21:59:10 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				k;
	unsigned char	*str;

	str = s;
	k = 0;
	while (k != n)
	{
		*(str + k) = '\0';
		k++;
	}
}
