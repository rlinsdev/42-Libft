/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:55:44 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 19:11:54 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../Libft/libft.h"

int	main(void)
{
	char str2[100] = "String com 100 caracteres"; // Array of size 100
	char str1[100] = "Alteração"; // Array of size 5

	printf("ORIG: Ant: %s\n", str1);
	//memmove(str1, str2, sizeof(str2));
	memmove(str1, str2, 4);
	printf("ORIG: Dep: %s\n", str1);

	char str4[100] = "String com 100 caracteres"; // Array of size 100
	char str3[100] = "Alteração"; // Array of size 5

	printf("ALTE: Ant: %s\n", str3);
	//ft_memmove(str3, str4, sizeof(str4));
	ft_memmove(str3, str4, 4);
	printf("ALTE: Dep: %s\n", str3);

	return (0);
}
