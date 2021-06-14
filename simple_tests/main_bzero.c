/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:16:06 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 10:42:49 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main (void)
{
	char	data[20];
	size_t	n;

	n = 20;
	ft_bzero(data, n);
	printf("%s", data);
	return (0);
}
