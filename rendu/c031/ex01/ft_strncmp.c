/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:18:26 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/14 16:40:09 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && (i < n -1))
	{
		i++;
	}	
	return (s1[i] - s2[i]);
}
/*int main()
{
	char s1[] = "djdsjlo";
	char s2[] = "tmevfvr";

	printf("%d",strncmp(s1,s2,5));
}*/
