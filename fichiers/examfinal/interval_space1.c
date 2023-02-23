/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:25:48 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 11:12:31 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_strlen( char *str)
{
	int i; 
	int space;

	i = 0; 
	while ( str[i] == ' ' || str[i] == '\t') 
		i++; 
	while (str[i]) 
	{
		if (str[i] == ' ' || str[i] == '\t')
		space = 1; 
   		if (!( str[i] == ' ' || str[i] == '\t'))
		{
			if (space == 1)
			   	write (1 , "   ", 3);
			space = 0; 
			write (1, &str[i], 1); 
		}
	i++; 		
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		ft_strlen(av[1]);
	write (1 , "\n", 1);
}
