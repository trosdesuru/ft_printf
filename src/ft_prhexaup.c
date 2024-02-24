/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prhexaup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:17:56 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/24 14:42:02 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prhexaup(unsigned int hexa, int count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (hexa > 15)
	{
		count = ft_prhexaup(hexa / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_prchar(base[hexa % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
