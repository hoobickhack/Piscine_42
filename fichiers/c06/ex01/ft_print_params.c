* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:23:36 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/15 16:46:44 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *str)
{
	int i;

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

	j = 1;
	while (j < ac)
	{	
		ft_str(av[j]);
		write(1, "\n", 2);
		j++;
	}
	return (0);
}
