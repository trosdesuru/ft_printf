/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:00:06 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/24 14:52:51 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prchar(char const c, int count)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	count++;
	return (count);
}
