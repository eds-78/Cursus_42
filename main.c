/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:30:45 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/11 10:52:23 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char b='t';
	printf("%c\n", ft_toupper((int)b));
	return (0);
}
