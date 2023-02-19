/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:37:42 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/06 20:41:02 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = swap;
		i++;
	}	
}
/*int	main()
{
	int	tab[] = {1,2,3,4};
	int size = 4;
	int i;
	ft_rev_int_tab(tab, size);
	i = 0;
	while(i < size)
	{
	printf("%d", tab [i++]);;
	}
	return(0);
}*/
