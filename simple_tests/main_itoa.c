/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:47:26 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/21 12:39:35 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft/libft.h"

int main(void)
{
	char	*result;
	int		numb;

	numb = 22141;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	numb = 2147483647;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	numb = -2147483648;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	numb = 0;
	result = ft_itoa(numb);
	printf("%d: %s\n", numb, result);
	return (0);
}
