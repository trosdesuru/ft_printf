/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prhexalow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:13:58 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/24 14:39:31 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prhexalow(unsigned long hex, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (hex > 15)
	{
		count = ft_prhexalow(hex / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_prchar(base [hex % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
