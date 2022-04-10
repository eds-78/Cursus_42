/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:30:45 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/10 22:23:44 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("Before memcpy dest = %s\n", argv[1]);
	ft_memmove(argv[1], argv[2], ft_strlen(argv[2]) + 1);
	printf("After memcpy dest = %s\n", argv[1]);
	return (0);
}
