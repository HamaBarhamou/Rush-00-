/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:52:26 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/11 12:14:27 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include "ft_putchar.c"

void	affiche(int hi, int lj, int haut, int larg)
{
	if ((((hi == 0) || ((hi == haut-1))) && (lj == 0)))
		ft_putchar('A');
	else if (((hi == 0) || (hi == haut-1)) && (lj == larg-1))
		ft_putchar('C');
	else if ((hi != 0) && (hi != haut-1) && (lj != 0) && (lj != larg-1))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			affiche(i, j, y, x);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}
