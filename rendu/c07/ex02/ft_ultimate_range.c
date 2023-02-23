/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:20:17 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/21 11:22:08 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
/*int	main()
{
	int	min; 
	int	max; 
	int	*range; 

	min = 555;
	max = 555; 
	printf("%d" , ft_ultimate_range(&range , min, max));
}*/
