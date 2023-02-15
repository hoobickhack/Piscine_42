/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:14:52 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/12 15:01:22 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i = 1;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] => 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*int	main ()
{
char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

printf("%s", ft_strcapitalize(str));
		return (0);
}*/
