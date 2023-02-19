/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:20:57 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/01 20:58:49 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	d;

	d = 'z';
	while (d >= 'a')
	{
		write (1, &d, 1);
		d = d - 1;
	}	
}
/*int main (void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
