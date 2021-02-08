/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carofern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 21:21:33 by carofern          #+#    #+#             */
/*   Updated: 2021/02/07 21:52:32 by carofern         ###   ########.fr       */
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
			if (column == 1 || column == x)
			{
				if (line == 1)
					ft_putchar('A');
				else if (line == y)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (line == 1 || line == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
