/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:48:20 by rlins             #+#    #+#             */
/*   Updated: 2022/04/05 23:15:45 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../Libft/libft.h"

int	main(void)
{
	char str1[15];
	char str2[15];
	int ret1, ret2, ret3;

	ft_memcpy(str1, "ABCDe", 6);
	ft_memcpy(str2, "ABCDf", 6);

	ret1 = memcmp(str1, str2, 4); //0
	ret2 = memcmp(str1, str2, 6); //-1
	ret3 = memcmp(str2, str1, 6); //1
	printf("Orig1: %d\n", ret1);
	printf("Orig2: %d\n", ret2);
	printf("Orig3: %d\n", ret3);

	ret1 = ft_memcmp(str1, str2, 4); //0
	ret2 = ft_memcmp(str1, str2, 6); //-1
	ret3 = ft_memcmp(str2, str1, 6); //1
	printf("Alte1: %d\n", ret1);
	printf("Alte2: %d\n", ret2);
	printf("Alte3: %d\n", ret3);
	
	return(0);
}
