/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:45:33 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/05 18:48:16 by mkacemi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	rep;

	tab = NULL;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * (max - min));
	rep = min;
	i = 0;
	while (rep < max)
		tab[i++] = rep++;
	return (tab);
}
/*
int	main(void)
{
	int *tab = ft_range(5,10);
	for (int i = 0; i < 10-5 ; i++)
	
		printf("%d",tab[i]);
}
*/
