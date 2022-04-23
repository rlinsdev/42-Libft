/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:36:43 by rlins             #+#    #+#             */
/*   Updated: 2022/04/03 23:06:29 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	// char str1[50] = "Serão dois # no meio da # Exibir a segunda";
	// char str2[50] = "Serão dois # no meio da # Exibir a segunda";

	//printf("Mess Original: %s\n", str1);
	// printf("Func Original: %s\n", strrchr(str1, '#'));
	// printf("Func Alterada: %s\n", ft_strrchr(str2, '#'));
	char str1[50] = "tripouille";
	char str2[50] = "tripouille";
	printf("Func Original: %s\n", strrchr(str1, 't' + 256));
	printf("Func Implemen: %s\n", ft_strrchr(str2, 't' + 256)); // --KO
	
	return(0);
}
