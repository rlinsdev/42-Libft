/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_str_count_word.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:02:09 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 15:06:04 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[80] = "Sentença com alguns espaços (4)";

	printf("Palavras (Separador espaço): %ld\n",ft_str_count_word(str, ' '));

	return (0);
}
