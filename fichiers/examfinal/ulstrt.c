/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstrt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:56:51 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/22 20:10:45 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_str(char *str)
{
	int	i; 

	i = 0;
	while ( str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; 
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
}
int	main (int ac, char **av)
{

	if (ac == 2 ) 
	ft_str(av[1]);
	write (1, "\n", 1);
}

