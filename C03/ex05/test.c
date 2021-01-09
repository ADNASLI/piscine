#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j] && i < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	return(i);
}

int	main(void)
{
	char src[] = "Je mange du pain";
	char dst[50] = "Tous les matins, ";
	unsigned int size = sizeof(dst);
//	printf("%lu\n", strlcat(dst, src, size));
	printf("%u\n", ft_strlcat(dst, src, size));
	return(0);
}
