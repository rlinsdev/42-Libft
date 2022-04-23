/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:29:27 by rlins             #+#    #+#             */
/*   Updated: 2022/04/06 18:38:53 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
//#include <stdlib.h>
#include <stdio.h>
//#include <string.h>

int	main(void)
{
	// int a = 54325;
	// char buffer[20];
	// itoa(a,buffer,10);   // here 10 means decimal
	// printf("Decimal value = %s\n", buffer);
	
	//int nb = 21;
	// int nb = 54325;
	// int nb = -54325;
	int nb = -2147483648; //KO
	
	printf("Valor em char: %s\n", ft_itoa(nb));

	return (0);
}
