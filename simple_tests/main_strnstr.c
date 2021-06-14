/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:03:58 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/20 20:05:59 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "dalibftd\0a";
	str2 = "libft";
	printf("My function output: %s\n", ft_strnstr(str1, str2, 12));
	return (0);
}
