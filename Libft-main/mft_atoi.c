/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:31:15 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 17:07:07 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	int val;
	// char str[20];
	
	// strcpy(str, "98993489");	
	// val = atoi(str);
	// printf("Orig: = %s. Value = %d\n", str, val);
	// strcpy(str, "Zero-Zer");
	// val = atoi(str);
	// printf("Orig: = %s. Value = %d\n", str, val);

	// strcpy(str, "98993489");
	// val = ft_atoi(str);
	// printf("Impl: = %s. Value = %d\n", str, val);
	// strcpy(str, "Zero-Zer");
	// val = ft_atoi(str);
	// printf("Impl: = %s. Value = %d\n", str, val);

	char str2[10];
	//strcpy(str2, "--1"); // 3 KO
	strcpy(str2, "++1"); // 4 KO
	val = atoi(str2);
	printf("Orig: = %s. Value = %d\n", str2, val);
	val = ft_atoi(str2);
	printf("Impl: = %s. Value = %d\n", str2, val);

	return(0);
}
