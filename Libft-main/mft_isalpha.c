/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_isalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:20:57 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 16:01:36 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	//c = 'a';
	c = 1;
	printf("É caracter? Alte: %d\n", ft_isalpha(c));
	printf("É caracter? Orig: %d\n", isalpha(c));
}
