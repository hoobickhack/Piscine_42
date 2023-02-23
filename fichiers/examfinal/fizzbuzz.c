/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:10:24 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/22 17:23:41 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1 , &c, 1);
}
void	 put_nbr(int nb)
{
	if (nb > 9)
	{
		put_nbr( nb / 10);
		put_nbr( nb % 10);
	}	
	else 
		putchar( nb + 48);
}
int main()
{
	int i;

	i = 1; 
	while(i < 100)
	{
		if (i % 3 == 0 && i % 5 == 5)
		   write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz" , 4);
		else if (i % 5 == 0) 	
			write (1, "buzz", 4); 
		else 
			put_nbr(i);
		i++;
	   write (1, "\n", 1);	
	}
//	i++; 
}

