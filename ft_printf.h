/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:59:18 by sde-sa-p          #+#    #+#             */
/*   Updated: 2024/04/18 14:54:49 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_puthexa(unsigned int n, char *b);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_unsigned_int(unsigned int nb);
int		ft_putpoint(int *point);
int		ft_putlongpointer(unsigned long n, char *b);
int		ppalfunction(va_list ap, const char type);
int		ft_printf(char const *str, ...);

#endif