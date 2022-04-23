/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_toupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:44:01 by rlins             #+#    #+#             */
/*   Updated: 2022/04/03 20:25:33 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char	c;
	c = 'm';
	
	printf("Origi: %c -> %c\n", c, toupper(c));
	c = 'm';
	printf("Alter: %c -> %c\n", c, ft_toupper(c));

	return (0);
}
