/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:47:47 by thrio             #+#    #+#             */
/*   Updated: 2022/11/23 17:15:03 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_int(char c);
int	ft_putstr_int(char *s);
int	ft_checker(char c, va_list s);
int	ft_putnbr_base(long unsigned int nb, char *base);
int	ft_print_p(long unsigned int nb);
int	ft_putnbr_int(long int nbr);
int	ft_printxx(long long int nb, char c);

#endif
