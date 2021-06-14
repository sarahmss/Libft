/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:54:09 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/21 13:07:36 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	printf("%c from 'c'\n", ft_toupper('c'));
	printf("%c from 0\n", ft_toupper('0'));
	printf("%c from A\n", ft_toupper('A'));
	printf("%c from 6\n", ft_toupper('6'));
	printf("%c from '6'\n", ft_toupper('D'));
	printf("%c from 'h'\n", ft_toupper('h'));
	printf("%c from '2'\n", ft_toupper('2'));
	printf("%c from random int \n", ft_toupper('~'));
	return 0;
}
