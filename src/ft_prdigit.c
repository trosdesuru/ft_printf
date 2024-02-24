/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:01:27 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/23 17:53:34 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prdigit(int n, int count)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		count = ft_prchar('-', count);
		if (count == -1)
			return (count);
		number *= -1;
	}
	if (number > 9)
	{
		count = ft_prdigit(number / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_prchar(number % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
