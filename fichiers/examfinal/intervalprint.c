/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intervalprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:09:57 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/22 15:30:31 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_str(char *str)
{
	int i; 
	int j; 

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{		
			if (str[i] == ' ' || str[i] == '\t')
				j = 1; 
			if (!( str[i] == ' ' || str[i] == '\t'))
			{
				if (j == 1 )
					write (1, "   ", 3); 	
				j = 0; 
				write(1, &str[i], 1);
			}
			i++; 
	}	
}
int 	main(int ac, char **av)
{
   if (ac == 2)	   
   {   
	   ft_str(av[1]);
   }	   
	   write(1, "\n" ,1);
}
