/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:07:08 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/06 20:18:16 by mkacemi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_iterative_factorial(nb - 1));
}
/*
#include<stdio.h>
int main(void)
{
	printf(" fact : %d ",ft_iterative_factorial(5));
}
*/
