/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:37:27 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/21 16:35:49 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
		range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*int	main()
{
	int	min = 10; 
	int	max = 100;
	int i = 0;
	int *d = ft_range(min, max);
	while (i != max-min)
		printf("%d\n", d[i++]);
	return (0);
}*/
