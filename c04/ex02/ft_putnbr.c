/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpolat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:44:47 by cpolat            #+#    #+#             */
/*   Updated: 2021/11/23 11:45:46 by cpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	nb_c[10];
	long	nb_l;
	int		i;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb_l = nb;
		nb_l = -nb_l;
	}
	else
		nb_l = nb;
	i = 0;
	while (nb_l > 0)
	{
		nb_c[i] = nb_l % 10 + '0';
		nb_l /= 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(nb_c[i]);
}
