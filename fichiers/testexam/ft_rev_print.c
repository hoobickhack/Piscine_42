/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:48:06 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/10 11:02:34 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char	*str)
{
	int i; 
	
	i = 0; 
	while( str[i] != '\0')
	{
		i++;
	}
	while ( i >=  0)
	{
		write(1, &str[i],1);
		i--;
	}
	return(str);
}
int	main ()
{
	char	str[] = "ilyes";
	ft_rev_print(str);
}
