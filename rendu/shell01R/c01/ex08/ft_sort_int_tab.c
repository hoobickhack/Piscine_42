/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:43:01 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/06 21:33:57 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if ((tab[j]) > (tab [j + 1]))
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}
/*int	main(void)
 {
     int tab []= {5, 6, 3, 4, 1, 2};
     int size = 6;
     int i;

     ft_sort_int_tab(tab, size);
     while (i < size)
     {
         printf("%d, ", tab[i++]);
     }
 return (0);
 }*/
