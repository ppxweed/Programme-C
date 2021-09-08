#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

//////////////////////////////////////////////////////////////////
t_list* add_link(t_list *lis , char *data)
{
  t_list *list;
  list = malloc(sizeof(t_list));
  if(list)
    {
      list->data = data;
      list->next =lis;
    }
  return list;
}
/////////////////////////////////////////////////////////////////
void print_list(t_list *list)
{
  while(list)
    {
      printf("%s\n", list->data);
      list = list->next;
    }
}

void ft_list_clear(t_list **begin_list)
{
  t_list *list;
  t_list *tmp ;
  list= *begin_list;
  while(list != NULL)
    {
      if(list->next != NULL)
	{
	  tmp = list->next;
	}
      else
	{
	  tmp = NULL;
	}
      free(list);
      list= tmp;
      *begin_list = list;
    }
}


int main()
{
  t_list *list = NULL;
  list = add_link(list, "padawan");
  list = add_link(list,"cela va");
  list = add_link(list, "disparaitre");
  print_list(list);
  ft_list_clear(&list);
  printf("\n");
  list = add_link(list, "padawan");
  list = add_link(list,"cela a");
  list = add_link(list, "apparaitre");
  print_list(list);
  
  return 0;
}
