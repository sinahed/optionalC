/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2023/08/23 14:26:04 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void comb(int start, int n)
{
    int i = start;

    if (n == 0)
    {
        ft_putchar(',');
        ft_putchar(' ');
        return;
    }
    
    while (i < 10)
    {
        ft_putchar(i + '0');
        comb(i + 1, n - 1);
        i++;
    }
}

void ft_print_combn(int n)
{
    comb(0, n);
}

int main(void)
{
    int n = 2;
    ft_print_combn(n);
    return (0);
}
