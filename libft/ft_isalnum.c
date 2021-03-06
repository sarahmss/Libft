/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 19:06:18 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 14:11:53 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum (int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122) || (48 <= c && c <= 57))
		return (1);
	else
		return (0);
}
