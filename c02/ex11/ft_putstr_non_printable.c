/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carofern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 23:37:04 by carofern          #+#    #+#             */
/*   Updated: 2021/02/06 23:40:04 by carofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ex(unsigned charc)
{
	char*base;

	base = "0123456789abcded";
	ft_putchar(base[c / 16]);
	ft_putchar(base[basec % 16]):
		}
