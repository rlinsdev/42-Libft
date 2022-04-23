/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:56:03 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 19:29:07 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char *result;
	// char src[] = "Uma string grande que será quebrada";
	char src[] = "0123456789";

	result = ft_substr(src, 9, 10);
	// result = ft_substr(src, 11, 6);
	//result = ft_substr(src, 101, 6);

	printf("Orig: %s.\nSubstring 11 a 6\n", src);
	printf("Impl: %s\n", result);

	// char str = strdup("0123456789");
	// char *s = ft_substr(str, 9, 10);
	// printf("Result: %d\n", strcmp(s, "9"));
	
	return(0);
}
