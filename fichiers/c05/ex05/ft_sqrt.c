/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:26:44 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/13 20:51:07 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	in;

	in = 1;
	while (in < 46340)
	{
		if (in * in == nb)
			return (in);
		in++;
	}
	return (0);
}
/*int	main ()
{	
	printf("%d\n", ft_sqrt(2));
	return (0);
}*/
