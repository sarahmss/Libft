/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:19:37 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/21 10:31:45 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int main()
{
	char *str1 = "let's see";
	char *str2 = " how this works";
	printf("%s\n", ft_strjoin(str1, str2));
}
