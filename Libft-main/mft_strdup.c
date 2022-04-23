/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:40:26 by rlins             #+#    #+#             */
/*   Updated: 2022/04/06 20:53:31 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../Libft/libft.h"

int	main(void)
{
	char source[] = "GeeksForGeeks";
	char* target = strdup(source);
	printf("Origin: %s\nCopied: %s\n", source, target);

	char* target2 = ft_strdup(source);
	printf("Implem: %s\nCopied: %s\n", source, target2);

	return (0);
}
