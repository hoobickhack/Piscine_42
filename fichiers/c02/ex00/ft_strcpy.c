/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:44:41 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/07 21:00:04 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}
/*int	main ()
{
	char	src[] = "lq zone en personne";
	char	dest1[] = "sisi";
	printf("%s",ft_strcpy(dest1,src));
	return(0);
}*/
