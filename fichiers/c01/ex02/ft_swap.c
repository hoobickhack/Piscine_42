/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:16:10 by isouaidi          #+#    #+#             */
/*   Updated: 2023/02/05 21:41:19 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp; 
}

int main(void)
{
	int a = 10;
	int b = 12;

	int *ptra = &a;
	int *ptrb = &b;

	printf("a = %d, b = %d", a, b);
	ft_swap(ptra, ptrb);
	printf("a = %d, b = %d", a, b);
}
