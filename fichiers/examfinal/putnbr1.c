/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:35:03 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 15:00:30 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_puchar(char c)
{
	write(1, &c , 1);
}
void	f_dylanbekhey(int nb)
{
	if (nb == -2147483648)
	{
		write(1 , "-2147483648", 11);
			return;
	}
	if (nb < 0)
	{	
		ft_puchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		f_dylanbekhey(nb /10);
		f_dylanbekhey(nb % 10);
	}
	else 
		ft_puchar( nb + 48);
}
int main(int ac, char **av)
{
	if (ac)
	f_dylanbekhey(atoi(av[1]));
 }
