size_t strlcat  (char *dst, const char *src, size_t dstsize)
{
  size_t  len_d;
  size_t  cont;
  
  cont = 0;
  len_d = ft_strlen(dst); 
  if (dstsize == 0)
    return (len_d);
  while ((cont < dstsize - 1) && src[cont])
  {
    dst[len_d + cont] = src[cont];
    cont++;
  }
  return (len_d);
}





#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
