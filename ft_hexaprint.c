/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:37:50 by sde-sa-p          #+#    #+#             */
/*   Updated: 2024/04/18 12:45:44 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char *b)
{
	int	cont;

	cont = 0;
	if (n < 16)
		cont += ft_putchar(b[n]);
	else
	{
		cont += ft_puthexa(n / 16, b);
		cont += ft_putchar(b[n % 16]);
	}
	return (cont);
}

int	ft_putlongpointer(unsigned long n, char *b)
{
	int	cont;

	cont = 0;
	if (n < 16)
		cont += ft_putchar(b[n]);
	else
	{
		cont += ft_putlongpointer(n / 16, b);
		cont += ft_putchar(b[n % 16]);
	}
	return (cont);
}

int	ft_putpoint(int *point)
{
	int	p;

	p = 0;
	p += ft_putchar('0');
	p += ft_putchar('x');
	p += ft_putlongpointer((unsigned long)point, "0123456789abcdef");
	return (p);
}

// int	main(void)
// {
// 	int n = 23;
// 	int *ptr = &n;
// 	ft_putpoint(ptr);
// 	printf("\n");
// 	printf("%p", ptr);
// }