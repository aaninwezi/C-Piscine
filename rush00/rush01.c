/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carofern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 21:55:34 by carofern          #+#    #+#             */
/*   Updated: 2021/02/07 22:47:12 by carofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int line;
	int column;

	line = 0;
	while (++line <= y && (x > 0 && y > 0))
	{
		column = 0;
		while (++column <= x)
		{
			if ((column == 1 || column == x) && (line == 1 || line ==y))
			{
			if (column == 1 && line == 1)
					ft_putchar('/');
					else if ((column == 1 && line == y) || (column  == x && line == 1))
				ft_putchar('\\');
			else if (column == x && line == y)
				ft_putchar('/');
		}
		else if (column == 1 || column == x || line == 1 || line == y)
			ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
