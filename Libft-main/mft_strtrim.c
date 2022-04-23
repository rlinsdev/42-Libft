/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:33:37 by rlins             #+#    #+#             */
/*   Updated: 2022/04/08 13:43:49 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char *result;
	char src[] = "AAAEspaços removidos?AAA";

	result = ft_strtrim(src, "A");
	printf("Sent. Orig: %s\n", src);
	printf("Char remov: %s\n", "A");
	printf("Sent. Impl: %s\n", result);
	return (0);
}
