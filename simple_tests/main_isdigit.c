/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:16:35 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:18:26 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
/*
** checks if is digit {0-9}
*/
int	main(void)
{
	printf("%d it should be 1\n", ft_isdigit('5'));
	printf("%d it should be 0\n", ft_isdigit('z'));
	printf("%d it should be 0\n", ft_isdigit(9));
	printf("%d it should be 0\n", ft_isdigit(' '));
	printf("%d it should be 0\n", ft_isdigit('a'));
	printf("%d it should be 1\n", ft_isdigit('9'));
}
