/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:46:09 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/18 14:59:30 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	while (x <= 46340)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*int   main()
{
    printf("Resultat : %d\n", ft_sqrt(8));
    return (0);
}*/
