/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:18:03 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/21 17:18:43 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"


char	*f(unsigned int i, char c)
{
	char	*result;

	result = NULL;
	if (97 <= c && c <= 122)
		c -= 32;
	result[i] = c;
	return (result);

}

int	main(void)
{

}
