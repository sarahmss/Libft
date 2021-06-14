/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:06:55 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:05:23 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	char str[] = "89789";
	char str2[] = "-89789";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi("1567"));
	printf("%d\n", ft_atoi(str2));
}
