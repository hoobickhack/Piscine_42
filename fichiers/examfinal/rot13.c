/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:37:58 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 09:47:16 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_str(char *str)
{
	int i;

	i = 0; 
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		   	str[i] += 13; 
		else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13; 
		write (1, &str[i], 1);
		i++; 
	}

}
int	main (int ac, char **av)
{
	if (ac == 2 )
		ft_str(av[1]);
	write(1, "\n", 1);
}
