/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:02:43 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/14 16:41:01 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	y = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (y < nb && src[y] != '\0')
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

	printf("%s",ft_strncat(dest,src,1));
	return(0);
}*/
