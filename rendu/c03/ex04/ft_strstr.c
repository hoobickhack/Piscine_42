/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:14:03 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/14 09:19:36 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char	*str, char	*to_fin)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i])
		{
			j = 0;
			while (to_find[j] == str[i + j])
			{
				if (to_find[j + 1] == '\0')
				{
					return (str + i);
				}
			j++;
			}
		i++;
		}
	}
	return (0);
}
/*int	main (void)
{
	char	str[] = "hello";
	char	to_find [] = "ll"; 

	printf("%s", ft_strstr(str, to_find)); 
}*/
