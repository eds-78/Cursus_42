/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-smet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:33:56 by ede-smet          #+#    #+#             */
/*   Updated: 2022/04/11 10:48:18 by ede-smet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
/* for size_t import */
# include <stddef.h>

int				ft_atoi(char *str);
int				ft_isapha(char c);
int				ft_isdigit(char c);
int				ft_isalnum(char c);
int				ft_isascii(char c);
int				ft_isprint(char c);
int				ft_strlen(char *str);
int				ft_toupper(int c);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif