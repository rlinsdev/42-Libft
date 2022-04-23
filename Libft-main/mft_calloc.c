/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:30:14 by rlins             #+#    #+#             */
/*   Updated: 2022/04/06 15:49:08 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../Libft/libft.h"

int	main(void)
{
	int* ptr1;
	int* ptr2;
	int n, i;
	n = 5;
	
	ptr1 = (int*)calloc(n, sizeof(int));
 	printf("Orig Calloc - OK.\n");
	for (i = 0; i < n; ++i)
	{
		ptr1[i] = i + 1;
	}
	printf("Orig Element: ");
	for (i = 0; i < n; ++i)
	{
		printf("%d, ", ptr1[i]);
	}
	printf("\n");
	printf("-----\n");
	ptr2 = (int*)ft_calloc(n, sizeof(int));
 	printf("Alte Calloc - OK.\n");
	for (i = 0; i < n; ++i)
	{
		ptr2[i] = i + 1;
	}
	printf("Alte Element: ");
	for (i = 0; i < n; ++i)
	{
		printf("%d, ", ptr2[i]);
	}
	printf("\n");

return (0);
}
