/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:24:12 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/23 20:05:33 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prptr(void *ptr, int count)
{
	count = ft_prstr("0x", count);
	if (count == -1)
		return (-1);
	count = ft_prhexalow((unsigned long)ptr, count);
	if (count == -1)
		return (-1);
	return (count);
}
