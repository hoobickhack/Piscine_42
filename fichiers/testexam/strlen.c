/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:30:03 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/10 10:00:35 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str) 
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while( i > 0)
	{
		i--;
		write (1, &str[i], 1); 
	}
	return (str);
}
int main ()
{
	char	str[] = "ilyes";
	ft_rev_print(str);
	return (0);
}
