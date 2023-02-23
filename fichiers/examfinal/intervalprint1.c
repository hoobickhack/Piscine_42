/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intervalprint1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:04:46 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 14:31:02 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *str)
{
	int i; 

	i = 0; 
	while(str[i])
	{
		if ( i == 0)
			write (1, &str[i], 1);
		else if (i % 5 == 0 && i % 3 == 0)
				write (1,"5",1);
		else if (i % 5 == 0)
				write( 1 , "3" , 1);
		else  if (i % 3 == 0)
		   		write ( 1 , "5" , 1);
		else 
			write(1, &str[i] , 1);	
		i++;
	} 
}
int main (int ac, char **av)
{
	if (ac == 2)
		ft_str(av[1]);
	write( 1 , "\n", 1);
}

