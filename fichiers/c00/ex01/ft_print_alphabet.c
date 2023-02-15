/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:37:53 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/01 20:04:01 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	v;

	v = 'a';
	while (v <= 'z')
	{
		write (1, &v, 1);
	v = v + 1;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
