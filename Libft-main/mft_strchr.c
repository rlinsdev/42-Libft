/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:52:29 by rlins             #+#    #+#             */
/*   Updated: 2022/04/12 16:35:20 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	// char str[50] = "Encontre uma # na string # Segunda ocorre";
	// const char c = '#';	
	// char str[50] = "tripouille";
	// char c = 't';
  
	char str[50] = "tripouille";
	char c = 0;	//KO

	printf("Mess Original: %s\n", str);
	printf("Func Original: %s\n", strchr(str, c));
	printf("Func Alterada: %s\n", ft_strchr(str, c));
	// printf("Func Original: %s\n", strchr(str, 't' + 256)); --KO
	// printf("Func Alterada: %s\n", ft_strchr(str, 't' + 256)); --KO
	
	return(0);
}
