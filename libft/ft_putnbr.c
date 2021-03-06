/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:47:12 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/07 10:58:04 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n >= 10 || n <= -10)
	{
		ft_putnbr(ft_abs(n / 10));
		ft_putnbr(ft_abs(n % 10));
	}
	else
		ft_putchar(ft_abs(n) + '0');
}
