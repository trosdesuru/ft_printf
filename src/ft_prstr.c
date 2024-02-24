/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:31:34 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/23 19:46:58 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prstr(char const *s, int count)
{
	int	i;

	i = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		count += 6;
		return (count);
	}
	while (s[i])
	{
		count = ft_prchar(s[i], count);
		if (count == -1)
			return (-1);
		i++;
	}
	return (count);
}
