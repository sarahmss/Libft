/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:09:17 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/23 20:06:07 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	char	*str;
	char	*set;

	str = "abc affffff abc";
	set = "abc";
	printf("%s", ft_strtrim(str, set));
	return (0);
}
