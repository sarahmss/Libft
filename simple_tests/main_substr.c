/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:02:15 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/20 19:31:57 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	char *str;
	char *substr;

	str = "topa tudo por";
	substr = ft_substr(str, 1, 10);
	printf ("%s should be a substr of %s", substr, str);
	return (0);
}
