/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:53:41 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/21 13:06:44 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	printf("%c from 'C'\n", ft_tolower('C'));
	printf("%c from 0\n", ft_tolower('0'));
	printf("%c from A\n", ft_tolower('A'));
	printf("%c from 6\n", ft_tolower('L'));
	printf("%c from '6'\n", ft_tolower('6'));
	printf("%c from 'h'\n", ft_tolower('h'));
	printf("%c from '2'\n", ft_tolower('2'));
	printf("%c from random int \n", ft_tolower('~'));
	return 0;
}
