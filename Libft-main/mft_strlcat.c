/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:06:38 by rlins             #+#    #+#             */
/*   Updated: 2022/04/05 15:34:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char	dest[50] = "Cidade"; // Todo: Sempre deixar uma variável grande, senão gera exceção
	char	*src;

	src = " Maravilhosa";
	printf(" ***** Não há real ***** \n");
	printf("Alte: Size: %ld \n", ft_strlcat(dest, src, 15));
	printf("Alte: Stri: %s \n", dest);
	return(0);
}

