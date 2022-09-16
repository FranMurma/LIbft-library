void  *ft_memset(void *b, int c, size_t len)
  size_t  cont;
  
  cont = 0;
  while (cont < len)
  {
    ((unsigned char *)b)[cont] = (unsigned char)b;
    cont++;
  }
  return  (b);
}
