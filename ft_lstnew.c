t_list  *ft_lstnew(void *content)
{
  t_list  nodo;
  
  nodo = (t_list *)malloc(sizeof(struct s_list));
  if (!nodo)
    return (NULL);
  nodo -> content = content;
  nodo -> next = NULL;
  return (nodo);
}
