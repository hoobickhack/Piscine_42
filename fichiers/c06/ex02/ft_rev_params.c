/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:20:18 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/15 14:45:20 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_str(char *str)
{
	int	i; 

	i = 0; 
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
			i++;
	}
}
int	main(int ac, char **av)
{
	int j;

	j = ac -1;
	while( j > 0)
	{
		ft_str(av[j]);
		write (1,"\n",1);
		j--;
	}
	return (0);
}
