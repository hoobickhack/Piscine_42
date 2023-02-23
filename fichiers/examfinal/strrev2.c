/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:00:42 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 15:10:42 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*strrev(char	*str)
{
	int i; 
	int c;
	char temp; 

	i = 0; 
	c = 0;
	while(str[i])
	i++; 
	while (c < i / 2)
	{
		temp = str[c];
		str[c] = str[i - c -1];
		str[i - c -1] = temp;
		c++; 
	}
	return (str);
}
int main()
{
	char str[] = "ilyes";
	printf("%s", strrev(str));
}
