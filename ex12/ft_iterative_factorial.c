/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:00:35 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/06 18:12:10 by mkacemi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb > 12)
		return (0);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
/*
#include<stdio.h>
int main(void)
{
	printf(" fact : %d ",ft_iterative_factorial(3));
}
*/
