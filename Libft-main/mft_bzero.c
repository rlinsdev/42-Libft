/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:19:02 by rlins             #+#    #+#             */
/*   Updated: 2022/04/05 13:38:07 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char *test = malloc(256);
	
	bzero(test, 256);
	printf("Orig: %s\n", test);

	char *test2 = malloc(256);
	
	ft_bzero(test2, 256);
	printf("Alte: %s\n", test2);

	return(0);
}
