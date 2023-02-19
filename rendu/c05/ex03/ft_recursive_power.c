/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:32:43 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/18 14:31:31 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
		return (nb *= (ft_recursive_power(nb, power - 1)));
	return (0);
}
/*
int	main() 
{
	printf("%d", ft_recursive_power(5, 5));
	return(0);
}*/
