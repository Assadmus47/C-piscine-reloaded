/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:36:12 by marvin            #+#    #+#             */
/*   Updated: 2025/11/07 16:12:07 by mkacemi          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
/*
int main()
{
    	char *tab[] = {"hello", "world", 0};
    	int b = ft_count_if(tab, toto);
    	printf("%d\n", b); // devrait afficher 2
	return 0;
}
*/
