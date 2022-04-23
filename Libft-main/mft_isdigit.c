/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_isdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:20:57 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 16:03:36 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c;
	c='5';
	printf("Orig: %d\n", isdigit(c));
	printf("Impl: %d\n", ft_isdigit(c));
	c='+';
	printf("Orig: %d\n", isdigit(c));
	printf("Impl: %d\n", ft_isdigit(c));

	return 0;
}
