/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:01:50 by rlins             #+#    #+#             */
/*   Updated: 2022/04/04 13:07:56 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char str[50] = "substituindo parte do programa";
	printf("ORIG Antes: %s\n", str);
	// A partir do 14, ande 5, troque por #
	memset(str + 13, '#', 5*sizeof(char));
	printf("ORIG Depoi: %s\n", str);

	char str2[50] = "substituindo parte do programa";
	printf("ALTE Antes: %s\n", str2);
	// A partir do 14, ande 5, troque por #
	ft_memset(str2 + 13, '#', 5*sizeof(char));
	printf("ALTE Depoi: %s\n", str2);
	
	return(0);
}
