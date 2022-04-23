/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_isalnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:58:27 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 16:05:45 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;
	c = 'a';
	//c = '~';
	printf("Origi: %d\n", isalnum(c));
	printf("Alter: %d\n", ft_isalnum(c));
	
	return(0);
}
