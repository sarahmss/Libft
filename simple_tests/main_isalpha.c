/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:16:20 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:13:27 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
/*
** check alpha
*/
int	main(void)
{
	printf("%d it should be 0\n", ft_isalpha('5'));
	printf("%d it should be 1\n", ft_isalpha('z'));
	printf("%d it should be 0\n", ft_isalpha(9));
	printf("%d it should be 0\n", ft_isalpha(' '));
	printf("%d it should be 1\n", ft_isalpha('a'));
}
