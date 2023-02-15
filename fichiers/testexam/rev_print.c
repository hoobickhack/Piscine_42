/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:27:01 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/10 11:37:10 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print (char	*str)
{
	int	i;

	i = 0;
	while(str[i] !='\0')
	{
		i++;
	}
	while( i > 0)
	{
		i--;
		write(1, &str[i], 1);

	}
	write(1,"\n",1);
	return(str);
}
int	main()
{
	char	str[] = "hello";
	ft_rev_print(str);
}

