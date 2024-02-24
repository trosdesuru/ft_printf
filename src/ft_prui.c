/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prui.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:35:34 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/23 20:18:52 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prui(unsigned int n, int count)
{
	if (n > 9)
	{
		count = ft_prui(n / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_prchar(n % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
