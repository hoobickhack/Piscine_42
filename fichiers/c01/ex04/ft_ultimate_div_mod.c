/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:55:02 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/06 10:19:11 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int	main()
{
	int a = 10; 
	int b = 3;
	int *ptra = &a;
	int *ptrb = &b;
	ft_ultimate_div_mod(&a,&b);
	printf("a = %d. b = %d", a,b);
	return(0);
}*/
