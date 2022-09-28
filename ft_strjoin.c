char  *ft_strjoin(char const *s1, char const *s2)
{
  int len_s1;
  int len_s2;
  
  len_s1 = 0;
  while (s1[len_s1])
    len_1++;
  len_s2 = 0;
  while (s2[len_s2])
    len_2++;
  len_s3 = len_s1 + len_s2;
  s3 = malloc (sizeof (char) * len_s3 +1);
  if (!s3)
    return (NULL);
  len_s1 = 0;
  len_s3 = 0;
  while (s1[len_s1])
  {
    s3[len_s3] = s1[len_s1];
    len_s3++;
    len_s1++;
  }
  while (s2[len_s2])
  {
    s3[len_s3] = s2[len_s2]
    {
      len_s3++;
      len_s2++;
    }
    len_s3 = '\0';
    return (s3);
  }
