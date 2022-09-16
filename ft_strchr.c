#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == (char)c)
			return ((char *)(s + cont));
		cont++;
	}
	if (s[cont] == (char)c)
		return ((char *)(s + cont));
	return (NULL);
}
