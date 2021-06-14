/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:16:13 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:08:49 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
/*
** check alpha numeric
*/
int	main(void)
{
	printf("%d it should be 1\n", ft_isalnum('5'));
	printf("%d it should be 1\n", ft_isalnum('z'));
	printf("%d it should be 0\n", ft_isalnum(9));
	printf("%d it should be 0\n", ft_isalnum(' '));
	printf("%d it should be 1\n", ft_isalnum('a'));
	printf("%d it should be 0\n", ft_isalnum('@'));
}
