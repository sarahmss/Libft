/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:14:07 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:16:15 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
/*
** check ascii
*/
int	main(void)
{
	printf("%d it should be 1\n", ft_isascii('5'));
	printf("%d it should be 1\n", ft_isascii('z'));
	printf("%d it should be 0\n", ft_isascii(-9));
	printf("%d it should be 0\n", ft_isascii(128));
	printf("%d it should be 1\n", ft_isascii('a'));
}
