/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:53:41 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/22 21:13:13 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int fcatoi(char *str) 
{	
	int i;
   	int sign; 
	int res; 

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')      
		i++;	
	if (str[i] == '-' || str[i] == '+')
		{
		 if (str[i] == '-')
			 sign *= -1;
		i++;
		}
	while ( str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
	   i++; 	
	}
	return (res * sign);
}
int	main ( int ac , char **av)
{
	printf("%d", fcatoi(av[1]));
}

	
