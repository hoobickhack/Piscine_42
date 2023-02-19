/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:55:08 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/06 09:53:57 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main ()
{
	int a = 24;
	int b = 7;
	int div;
	int	*div1 = &div;
	int mod; 
	int	*mod1 = &mod;
	ft_div_mod(a, b, div1,  mod1);
	printf("div= %d , mod = %d\n", div, mod);
	return(0);
}*/	
