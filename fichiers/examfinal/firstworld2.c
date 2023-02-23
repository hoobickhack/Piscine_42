/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstworld2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:59:20 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 20:29:59 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_world(char *str)
{
	int i; 

	i = 0;
   while(str[i] == ' ' || str[i] == '\t')
   	i++;	   
	while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t') 
	{
		write( 1, &str[i], 1);
		i++; 
	}
}
int main(int ac, char **av)
{
	first_world(av[1]);
}
