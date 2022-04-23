/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_striteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:49:54 by rlins             #+#    #+#             */
/*   Updated: 2022/04/08 20:59:09 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

void	test_func(unsigned int i, char *str)
{
	printf("Função de teste. Index: %d valor %s\n", i, str);
	//return (str);
}

int	main()
{
	char str[10] = "Outra!!";
	printf("String Original: %s\n", str);
	ft_striteri(str, test_func);
	printf("Impleme. Função: %s\n", str);
	return (0);
}