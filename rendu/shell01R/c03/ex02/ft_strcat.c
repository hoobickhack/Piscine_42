/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:10:29 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/12 13:24:25 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main ()
{
	char	dest[100] = "hello";
	char	src[100] = "ilyes";

	printf("%s", ft_strcat(dest,src));
	return(0);
}*/
