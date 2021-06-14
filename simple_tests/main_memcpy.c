/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:57:51 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 21:24:37 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int    main (void)
{
    char    mem_dest[20];
    char    mem_src[] = "alo bom dia";
    size_t    n;
	char	*pointer;

	n = 5;
	printf("test");
	pointer = ft_memcpy(mem_dest, mem_src, n);
    printf("test");
	printf("My function output: %s\n", pointer);
    //printf("Original function output: %p", memcpy(mem_dest, mem_src, n));
    //printf("Original function output: %p", ft_memcpy(mem_dest, mem_src, n));
    return (0);
}
