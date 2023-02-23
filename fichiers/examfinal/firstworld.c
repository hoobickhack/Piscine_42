/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstworld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:14:47 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 12:31:59 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ftstr(char *str)
{
	int i;

	i = 0;
	while ( str[i] == ' ' ||  str[i] == '\t')
		i++;
	while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
	write (1, &str[i] , 1);
	i++;
	}
//	i++;
}
int main(int ac, char **av)
{
	if (ac == 2)
	ftstr(av[1]);
	write (1, "\n", 1);
}
