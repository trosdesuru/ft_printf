/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:02:56 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/24 18:03:04 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *s, ...);
int		ft_prchar(char const c, int count);
int		ft_prdigit(int n, int count);
int		ft_prhexalow(unsigned long hex, int count);
int		ft_prhexaup(unsigned int hexa, int count);
int		ft_prptr(void *ptr, int count);
int		ft_prstr(char const *s, int count);
int		ft_prui(unsigned int n, int count);

#endif
