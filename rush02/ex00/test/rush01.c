/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 14:03:09 by pheilbro          #+#    #+#             */
/*   Updated: 2019/01/27 15:29:41 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testing.h"

void	rush(int x, int y)
{
	int	x_i;
	int	y_i;

	x_i = -1;
	y_i = -1;
	while (++y_i < y && x != 0)
	{
		while (++x_i < x)
		{
			if (x_i == 0 && y_i == 0)
				ft_putchar('/');
			else if (x_i == 0 && y_i == (y - 1))
				ft_putchar('\\');
			else if (x_i == (x - 1) && y_i == 0)
				ft_putchar('\\');
			else if (x_i == (x - 1) && y_i == (y - 1))
				ft_putchar('/');
			else if (x_i == 0 || x_i == (x - 1) || y_i == 0 || y_i == (y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		x_i = -1;
	}
}
