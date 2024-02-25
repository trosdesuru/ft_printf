/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:09:25 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/25 20:00:25 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static int	ft_prselect(char const s, va_list args, int count)
{
	if (s == 'c')
		count = ft_prchar(va_arg(args, int), count);
	else if (s == 's')
		count = ft_prstr(va_arg(args, char *), count);
	else if (s == 'p')
		count = ft_prptr(va_arg(args, void *), count);
	else if (s == 'i' || s == 'd')
		count = ft_prdigit(va_arg(args, int), count);
	else if (s == 'u')
		count = ft_prui(va_arg(args, unsigned int), count);
	else if (s == 'x')
		count = ft_prhexalow(va_arg(args, unsigned int), count);
	else if (s == 'X')
		count = ft_prhexaup(va_arg(args, long int), count);
	else if (s == '%')
		count = ft_prchar('%', count);
	else
		count = -1;
	return (count);
}

static int	ft_ptfcheck(char const *s, va_list args, int count)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = ft_prselect((char)s[i], args, count);
			if (count == -1)
				return (-1);
		}
		else
		{
			if (write(1, &s[i], 1) == -1)
				return (-1);
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		c;

	c = 0;
	va_start(args, s);
	c = ft_ptfcheck(s, args, c);
	va_end(args);
	return (c);
}
/*
int	main(void)
{
	char	*c = "Edu";

	ft_printf("ft_print Lenght = %d\n", ft_printf("My name is %s\n", c));
	printf("printf Lenght = %d\n", ("My name is %s\n", c));
	return (0);
}
*/
