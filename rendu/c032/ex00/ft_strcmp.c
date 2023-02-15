/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:52:30 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/11 21:05:21 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i] || s1[i] < s2[i])
				return (s1[i] - s2[i]);
		}	
	}
	return (s1[i] - s2[i]);
}
/*int main()
{
	char s1[] = "iffs";
	char s2[] = "iggffffs";

	printf("%d",ft_strcmp(s1,s2));
}
*/
