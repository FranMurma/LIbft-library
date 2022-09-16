int toupper(int ch)
{
  if (ch >= 97 && ch <= 122)
    ch = ch - 32;
  return (ch);
}
