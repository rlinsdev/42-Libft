/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_tolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:24:03 by rlins             #+#    #+#             */
/*   Updated: 2022/04/03 20:24:42 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char	c;
	c = 'X';
	
	printf("Origi: %c -> %c\n", c, tolower(c));
	c = 'X';
	printf("Alter: %c -> %c\n", c, ft_tolower(c));

	return (0);
}
