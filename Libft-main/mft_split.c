/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:01:27 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 14:32:17 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int i = 0;
	// Teste 1
	// char str[20] = "This is string.";
	// char **result = ft_split(str, 'r');
	// teste 2

	// char str[80] = "finally | finishing | this complicated | function...";
	// char **result = ft_split(str, '|');
	
	// printf("Original: %s\n", str);
	// while(result[i])
	// {
	// 	printf("Parte%d: %s\n", i, result[i]);
	// 	i++;
	// }

	char * * tab = ft_split("  tripouille  42  ", ' ');
	while(tab[i])
	{
		printf("Parte%d: %s\n", i, tab[i]);
		i++;
	}
	
	printf("res: %s\n", tab[0]);
	printf("res: %ld\n", strlen("tripouille") + 1);
	

	return (0);
}
