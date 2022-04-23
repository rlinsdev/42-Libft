/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:57:40 by rlins             #+#    #+#             */
/*   Updated: 2022/04/04 02:11:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char str1[50] = "Hello word";
	char str2[50] = "Hello word";
	int numb;

	numb = 30;
	
	printf("Origi: %d\n", strncmp(str1, str2, numb));
	printf("Alter: %d\n", ft_strncmp(str1, str2, numb));
}
