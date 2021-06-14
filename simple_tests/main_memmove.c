/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:00:54 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/18 21:31:52 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"


void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	pos;

	if (dest > src)
	{
		while (len-- > 0)
		{
			((char *)dest)[len] = ((char *)src)[len];
		}
	}
	else
	{
		pos = 0;
		while (pos < len)
		{
			((char *)dest)[pos] = ((char *)src)[pos];
			pos++;
		}

	}
	return (dest);
}

int main ()
{
    char dest[] = "Aticleworld";
    const char src[]  = "Amlendra";
	//Source and destination before memmove
    printf("Before ft_memmove >> dest = %s, src = %s\n\n", dest, src);
    ft_memmove(dest, src, 5);
    //Source and destination after memmove
    printf("After ft_memmove >> dest = %s, src = %s\n\n", dest, src);
    return 0;
    //Source and destination before memmove
    printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
    memmove(dest, src, 5);
    //Source and destination after memmove
    printf("After memmove >> dest = %s, src = %s\n\n", dest, src);

}
