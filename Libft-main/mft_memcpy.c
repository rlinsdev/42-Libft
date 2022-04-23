/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:01:18 by rlins             #+#    #+#             */
/*   Updated: 2022/04/06 19:16:53 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../Libft/libft.h"

int	main(void)
{
	char str1[] = "String 0001";
	char str2[] = "BETERRABA";
 
	printf("ORIG: Antes: %s\n", str1);
	//memcpy (str1, str2, sizeof(str2));
	memcpy (str1, str2, 4);
	printf("ORIG: Depoi: %s\n", str1);

	char str3[] = "String 0001";
	char str4[] = "BETERRABA";
 
	printf("ALTE: Antes: %s\n", str3);
	//ft_memcpy (str3, str4, sizeof(str4));
	ft_memcpy (str3, str4, 4);
	printf("ALTE: Depoi: %s\n", str3);
	 
	return(0);
}
