/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:27:35 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/18 14:30:23 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	return (nb *= (ft_recursive_factorial(nb - 1)));
}
/*int	main ()
{
	int	nb;

	nb = 12;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}*/
