/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carofern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:16:29 by carofern          #+#    #+#             */
/*   Updated: 2021/02/07 21:53:56 by carofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		line;
	int		column;

	line = 0;
	while (line++ < y)
	{
		column = 0;
		while (column++ < x)
		{
			if (line == 1 || line == y)
			{
				if (column == 1)
					ft_putchar('A');
				else if (column == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
