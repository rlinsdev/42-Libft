/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:27:08 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 16:16:06 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char	param[100] = "Ola ventilador"; // 14
	//char	param[100] = "A"; // 1
	printf("Orig: %ld\n", strlen(param));
	printf("Alte: %d\n", ft_strlen(param));
}

