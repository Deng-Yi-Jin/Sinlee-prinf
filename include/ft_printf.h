/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:08:49 by sinlee            #+#    #+#             */
/*   Updated: 2023/05/19 14:59:05 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h> // va_list, va_start, va_arg, va_end
# include <unistd.h> // write
# include <stdlib.h> // bool, size_t

void	ft_putchar_len(char c, int *len);
void	ft_putstr_len(char *str, int *len);
void	ft_putnbr_len(int n, int *len);
void	ft_putnbr_u_len(unsigned int n, int *len);
void	ft_putnbr_hexa_len(unsigned int nbr, int *len, bool up);
void	ft_putpointer_len(size_t pointer, int *len);
int		ft_printf(const char *str, ...);

#endif