/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:02:10 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/23 21:13:16 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <bsd/string.h>

int main(void)
{
	int	s;
	int	r;

	s = -1;
	while (++s <= 13)
	{
		char	src[5] = "casa";
		char	dst[9] = "amor";
		if (s < 1)
		{
			printf("src:%s |dst:%s\n", src, dst);
			printf("r = strlcat(dst, src, size)\n");
		}
		r = strlcat(dst, src, s);
		printf("size:%d | src:%s | dst:%s | return: %d\n", s, src, dst, r);
	}
		return (0);
	/*
    char *first;
    char last[] = "a potentially long string";
    int r;
    int size = 64;

	first = malloc(sizeof(char *) * size);
    first = "this is";
	printf("berfore %s\n",first);
	r = ft_strlcat(first,last,size);
	printf("after ft_Strlcat: %s\n", first);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
	*/
}
