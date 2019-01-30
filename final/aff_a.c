/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 11:33:55 by snechaev          #+#    #+#             */
/*   Updated: 2019/01/28 11:49:48 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc > 2)
	{
		write(1, "a\n", 2);
		return (1);
	}
	i = 0;
	while (argv[1][i] != '\0' )
	{
		if (argv[1][i] == 'a')
		{
		   write(1, "a", 1);
		   break;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}