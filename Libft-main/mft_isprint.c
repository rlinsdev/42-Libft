/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_isprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:54:56 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 16:12:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'a';
	//c = '\n';
	printf("Impl: %d\n", ft_isprint(c));
	printf("Orig: %d\n", isprint(c));
}
