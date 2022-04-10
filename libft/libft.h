/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:33:56 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/10 15:35:21 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
/* for size_t import */
# include <stddef.h>

int		ft_atoi(char *str);
int		ft_isapha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);

#endif