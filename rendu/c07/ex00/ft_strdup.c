/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:13:40 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/19 23:30:49 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*copy;

	i = 0;
	size = ft_strlen(src);
	copy = malloc(sizeof(char) * (size + 1));
	if (!(copy))
		return (0);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*#include <stdio.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%s", ft_strdup(av[1]));
	return (0);
}*/
