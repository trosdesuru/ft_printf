/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:36:45 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/23 20:17:08 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_printf(char const *s, ...);
int		ft_prchar(char const s, int count);
int		ft_prdigit(int n, int count);
int		ft_prhexalow(unsigned long hex, int count);
int		ft_prhexaup(unsigned int hexa, int count);
int		ft_prptr(void *ptr, int count);
int		ft_prstr(char const *s, int count);
int		ft_prui(unsigned int n, int count);

#endif
