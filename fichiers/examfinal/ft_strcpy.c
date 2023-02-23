/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:59:40 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/23 10:19:45 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy( char *s1, char *s2)
{
	int i; 

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++; 
	}
	s1[i] = '\0';
	return (s1);
}
int main()
{
	char	s1[] = "iyes";
	char	s2[] = "loco"; 

	printf("%s", ft_strcpy( s1,s2));

}
