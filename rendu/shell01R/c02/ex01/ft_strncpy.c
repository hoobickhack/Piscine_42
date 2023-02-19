/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:16:35 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/07 20:45:26 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "bonjour";
	char	dest[] = "aurevoir";
	
	printf("Destination : %s\n", ft_strncpy(dest, src, 3));
	return (0);
}*/
