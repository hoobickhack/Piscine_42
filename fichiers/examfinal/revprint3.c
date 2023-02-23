/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:13:12 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 15:27:56 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
char	*ft_rev_print(char	*str)
{
	int  i; 

	i = 0;
	while (str[i])
		i++; 
	while (i  >= 0)
	{
		write(1 , &str[i], 1);
		i--; 
	}
	return (str);
}
int main()
{
	char str[] = "ilyes";
	ft_rev_print(str);
}
