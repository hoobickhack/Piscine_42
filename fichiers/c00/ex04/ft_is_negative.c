/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:41:59 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/03 10:23:57 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	int	a;
	int	b;

		a = 'N';
		b = 'P';
	{
		if (n < 0)
			write (1, &a, 1);
		else
			write (1, &b, 1);
	}
}
int main(void)
{
	ft_is_negative (4);
		return (0);
}
