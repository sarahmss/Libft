/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:28:53 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:53:45 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main (void)
{
	char	data[20];

	printf("%p\n", ft_memset(data, '\0', 20));
	printf("%p\n", memset(data, '\0', 20));
	//printf("%s\n", memset(data, '\0', 20));
	printf("%p\n", memset(data, 'A', 20));
	printf("%p\n", ft_memset(data, 'A', 10));
	//printf("%s\n", memset(data, 'A', 10));
	return (0);
}
