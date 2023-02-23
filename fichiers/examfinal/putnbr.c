/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:16:31 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/22 21:54:03 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	put_nbr(int nb)
{
	if ( nb == -2147483648)
	{
		write (1, "-2147483648",11);
			return;
	}	
	if ( nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if ( nb > 9 )
	{
		put_nbr( nb / 10);
		put_nbr(nb % 10);
	}
	else 
		ft_putchar ( nb + 48);
}
int	main(int ac, char **av)
{
	if (ac)
	put_nbr(atoi(av[1]));
}
