/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:40:34 by rlins             #+#    #+#             */
/*   Updated: 2022/04/08 13:52:06 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char str1[50] = "Cidade";
	char str2[50] = " Maravilhosa";
	
	printf("String A: %s\n", str1);
	printf("String B: %s\n", str2);
	printf("Join Res: %s\n", ft_strjoin(str1, str2));
	printf("Join Res: %s\n", ft_strjoin("tripouille", "42"));

	return(0);
}
