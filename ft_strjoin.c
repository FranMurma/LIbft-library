#include "libft.h

char  *ft_strjoin(char const *s1, char const *s2)
{
  int len_s1;
  int len_s2;
  
  len_s1 = ft_strlen(s1);
  len_s2 = ft_strlen(s2);
  s3 = malloc (sizeof (char) * (len_s1 + len_s2 +1));
  if (!s3)
    return (NULL);
  while (s2[len_s2])
  {
    s3[len_s1 + len_s2] = s2[len_s2];
    len_s2--;
  }
  while (s1[len_s1])
  {
    s3[len_s1 + len_s2] = s1[len_s1]
      len_s1--;
  }
  s3[len_s1 + len_s2 + 1] = '\0';
  return (s3);
}
