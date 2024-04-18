/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:26:33 by sde-sa-p          #+#    #+#             */
/*   Updated: 2024/04/18 15:05:01 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	cont;

	cont = 0;
	if (n == -2147483648)
	{
		cont += ft_putchar('-');
		cont += ft_putchar('2');
		cont += ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		cont += ft_putchar('-');
		n = -n;
		cont += ft_putnbr(n);
	}
	else if (n > 9)
	{
		cont += ft_putnbr(n / 10);
		cont += ft_putnbr(n % 10);
	}
	else
		cont += ft_putchar(n + 48);
	return (cont);
}

int	ft_unsigned_int(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
	{
		len += (ft_unsigned_int(nb / 10));
		len += (ft_unsigned_int(nb % 10));
	}
	else
		len += (ft_putchar(nb + '0'));
	return (len);
}

// int	main(void)
// {
// 	ft_putnbr(23);
// }
