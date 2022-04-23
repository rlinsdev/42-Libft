/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:10:31 by rlins             #+#    #+#             */
/*   Updated: 2022/04/05 22:38:49 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../Libft/libft.h"

int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;
	ret = memchr(str, ch, strlen(str));
	printf("Orig: Antes: %s\nOrig: Carac:%c\nOrig: Depoi:%s\n", str, ch, ret);

	char *ret2;
	ret2 = ft_memchr(str, ch, strlen(str));
	printf("Alte: Antes: %s\nAlte: Carac:%c\nAlte: Depoi:%s\n", str, ch, ret2);

	return (0);
}
