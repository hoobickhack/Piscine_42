/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:18:17 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/22 20:46:57 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i; 
	int j; 
	char	temp ;

	i = 0;
   	j = 0;	
	while (str[i])
		i++; 
	while( j < i / 2) 
	{
		temp = str[j];
		str[j] = str[i - j  - 1];
		str[i - j - 1] = temp;
		j++; 

	}
	return (str);
}
int	main(int ac,  char **av)
{	
	printf("%s", ft_strrev(av[1]));
}
