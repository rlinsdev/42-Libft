/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:44:07 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 19:18:28 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char	orig [50] = "C-programming-Languagea"; // 23 Char.
	char	dest [70]; // Tamanho máx.

	char	orig1 [50] = "C-programming-Languagea"; // 23 Char.
	char	dest1 [70]; // Tamanho máx.

	// strlcpy não é uma função padrão do C
	printf("*****\n");
	printf("Atenção: Não consegui testar esta funão (A original covalente)\n");
	printf("*****\n");
	printf("Orig: Lengt: %s\n", strncpy(dest1, orig1, 10));
	printf("Orig: Desti: %s\n", dest1);

	// Retorno do tamanho do que foi passado
	printf("Impl: Lengt: %ld\n", ft_strlcpy(dest, orig, 10));
	printf("Impl: Desti: %s\n", dest);
	
	return(0);
}
