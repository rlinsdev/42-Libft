/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:04:27 by rlins             #+#    #+#             */
/*   Updated: 2022/04/10 15:17:36 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

char test_func(unsigned int i, char str)
{
	printf("Função de teste. Index: %d valor %c\n", i, str);
	return (str);
}

// char test_func2(char str)
// {
// 	return (char)(str+1);
// }

int main()
{
	char str[10] = "Opa!!";
	printf("String Original: %s\n", str);
	char *result = ft_strmapi(str, test_func);
	printf("Impleme. Função: %s\n", result);

	// printf("String Original: %s\n", str);
	// char *result2 = ft_strmapi(str, test_func2);
	// printf("Impleme. Função: %s\n", result2);


	return (0);
}
