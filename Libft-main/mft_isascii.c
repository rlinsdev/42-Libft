/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_isascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:54:14 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 16:10:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	c = 'a';
	//c = 'ã'; // não da certo passar estres caracteres. Gera warning

	printf("Orig: %d\n", isascii(c));
	printf("Alte: %d\n", ft_isascii(c));
	return(0);
}
