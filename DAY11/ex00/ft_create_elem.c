#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

/*t_list* add_link(t_list *lis , char *data)
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
*/


void print_list(t_list *list)
{
  while(list)
    {
      printf("%s", list->data);
      list = list->next;
    }
}
t_list *ft_create_elem(void *data)
{
  t_list * list;
  list = malloc(sizeof(list));
  if(list)
    {
      list->data = data;
      list->next = NULL;

    }
  return list;
}

int main()
{
  t_list *list = NULL;
  list = ft_create_elem("toto\n");
  print_list(list);

  t_list *list1 = NULL;
  list1 = ft_create_elem("  \n");
  print_list(list1);

  t_list *list2 = NULL;
  list2 = ft_create_elem("");
  print_list(list2);

  t_list *list3 = NULL;
  list3 = ft_create_elem("=éoi=ri=eée \n");
  print_list(list3);
  return 0;
}
