/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:38:52 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 19:56:36 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ilstr(char *str) 
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
		 if (!(str[i] == ' ' || str[i] == '\t'))
		 {
				 if ( space == 1) 
		  		write(1, "   ", 3); 
				space = 0; 
				write(1, &str[i], 1); 
		 }
			i++; 
	}
}
int main (int ac, char **av)
{
	ilstr(av[1]);
}
