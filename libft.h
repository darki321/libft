/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:13:35 by tchevrie          #+#    #+#             */
/*   Updated: 2025/02/11 11:05:26 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* include des libs nécessaires à la libft */
# include <unistd.h>

/* fonctions prototypés avec des int */
int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);
int		isalpha(int c);
int		isdigit(int c);

/* fonctions prototypés avec des char */
char	*ft_strcat(char *dest, char *src);

/* fonctions prototypés avec des void */
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);

#endif
