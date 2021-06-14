/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:57:51 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:30:15 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main (void)
{
	char	*src;
	char	dest[25];

	src = "porra ate na transa";
	ft_memset(dest, '\0', 25);
	ft_memccpy(dest, src, 't', 7);
	printf("My function output: %s\n", dest);
	memccpy(dest, src, 't', 7);
	printf("Original function output: %s\n", dest);
}
