/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/08/23 14:26:03 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	nb;
	int		i;
	char	c[10];

	nb = nbr;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}

int	main(void)
{
	int	nbr;

	nbr = 42;
	ft_putnbr(nbr);
	return (0);
}
