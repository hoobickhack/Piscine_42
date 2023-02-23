/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:24:18 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 11:39:45 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_strlen(char *str)
{
	int i;

	i = 0; 
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] += 1;
		else if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		write (1, &str[i] , 1);
		i++; 
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
		ft_strlen(av[1]);
	write(1, "\n" , 1);
}
