/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:56:58 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/02 16:24:42 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_test(void)
{	
	int a;

	a = '0'
		;	
 	while (a <= '9')
	write (1, &a, 1); 
		a= a + '1';
}

 		
int	main()
{
	ft_test();
	return (0);
}

