/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:43:46 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/22 17:54:01 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ftstr(char *str)
{
	int i; 

	i = 0; 
	while(str[i])
	{
		write (1 ,&str[i],1);
			i++; 
	}
}
int main (int ac, char **av)
{
	int i; 
	
	i = ac -1;
   if (ac - 1)
    ftstr(av[i]);
	write (1 , "\n", 1); 
}
