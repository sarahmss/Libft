/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:18:57 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:26:11 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
/*
** checks if is printable
*/
int	main(void)
{
	printf("%d it should be 0\n", ft_isprint(0));
	printf("%d it should be 0\n", ft_isprint(1));
	printf("%d it should be 0\n", ft_isprint(9));
	printf("%d it should be 1\n", ft_isprint(' '));
	printf("%d it should be 1\n", ft_isprint('a'));
	printf("%d it should be 1\n", ft_isprint('9'));
}
