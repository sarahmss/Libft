#include "libft/libft.h"

int	main (void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = ft_strchr(str, ch);
	printf("String after ft_strchr |%c| is - |%s|\n", ch, ret);
	ret = strchr(str, ch);
	printf("String after   strchr |%c| is - |%s|\n", ch, ret);
	return (0);
}
