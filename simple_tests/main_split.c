/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:09 by smodesto          #+#    #+#             */
/*   Updated: 2021/05/25 15:20:15 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void split_tester(char *b, char c)
{
    int i;
    char **teste;

    i = 0;
    teste = ft_split(b, c);
    printf("------------------------------------------------------\n");
    printf("Original string: %s\nDelimiter: '%c'\n", b, c);
    printf("Result: ");
    if (teste == NULL)
        printf("Nulo\n");
    else
    {
        printf("|");
        while (teste[i])
        {
            printf("%s|", teste[i]);
            i++;
        }
        printf("\n");
    }
    free(teste);
}

int        main(void)
{
    split_tester(",,,teste,,,testando,,,", ',');
    split_tester("  ", ' ');
    split_tester(",,,teste,,,testando,,,", ' ');
    split_tester("   Testandozfunção split   ", 'z');
    split_tester("   Testando função split   ", ' ');
    split_tester("   Testando função split   ", ' ');
}


/*
int	main(void)
{
	char	**splitted_str;

	splitted_str = ft_split("jan,,,fe44v,,,m555ar,working?", ',');
	printf("word1:%s | word2: %s | word3:%s | word4:%s\n", splitted_str[0],
		splitted_str[1], splitted_str[2], splitted_str[3]);
	return (0);
}
*/
