/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:18:36 by sde-sa-p          #+#    #+#             */
/*   Updated: 2024/04/18 15:22:50 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ppalfunction(va_list ap, const char type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (type == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (type == 'p')
		count += ft_putpoint(va_arg(ap, int *));
	else if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (type == 'u')
		count += ft_unsigned_int(va_arg(ap, unsigned int));
	else if (type == 'x')
		count += ft_puthexa(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		count += ft_puthexa(va_arg(ap, unsigned int), "0123456789ABCDEF");
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	ap;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				count += write(1, "%", 1);
			else
				count += ppalfunction(ap, str[i]);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

/*int	main(void)
{
	char c = 'S';
	char *str = "Hola";
	int	n = 7;
	int nnegative = -7;
	unsigned int num = 123456;
	int *ptr = &n;
	
	
	ft_printf("Mi Printf: c:%c \n%%:%% \ns:%s \ni:%i \nd:%d \nu:%u \nx:%x 
	\nX:%X \np:%p\n\n\n\n", c, str, n, nnegative, num, num, num, ptr);
	printf("Printf: c:%c \n%%:%% \ns:%s \ni:%i \nd:%d \nu:%u \nx:%x \nX:%X 
	\np:%p\n", c, str, n, nnegative, num, num, num, ptr);
	return(0);
}*/