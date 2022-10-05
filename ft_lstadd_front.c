void  ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
  {
    new->next = lst[1];
		lst[0] = new;
  }
}
