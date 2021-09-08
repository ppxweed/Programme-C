#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

#include "ft_list.h"
#include <stdlib.h>
#include <unistd.h>
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

t_list *ft_create_elem(char *data)
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


t_list *ft_list_push_params(int ac, char **av)
{
  int i = 2;
  t_list *list;
  if(ac < 2)
    {
      return NULL;
    }
  list = ft_create_elem(av[1]);
  while(i<ac)
    {
      list = add_link(list, av[i]);
      i++;
    }
  return list;
}


int main(int argc, char **argv)
{
  t_list *list = NULL;
  list = ft_list_push_params(argc, argv);
  print_list(list);
  return 0;
}


