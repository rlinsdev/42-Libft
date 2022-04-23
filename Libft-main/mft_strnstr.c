/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:42:52 by rlins             #+#    #+#             */
/*   Updated: 2022/04/11 00:10:15 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	char *smallstring = "Bar";
	char	*ptr;
	ptr = ft_strnstr(largestring, smallstring, 11);
	//ptr = ft_strnstr(largestring, smallstring, 4);

	printf("Result: %s\n", ptr);

	return(0);
}
