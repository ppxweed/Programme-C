#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
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


void ft_list_reverse(t_list **begin_list)
{
  t_list * list = NULL;
  t_list * tmp= NULL;
  t_list *tmp2 = NULL;
  list = malloc(sizeof(t_list));
  list =*begin_list;
  if(list != NULL || list->next != NULL)
    { 
      tmp = list->next;
      tmp2 = tmp->next;
      list->next = NULL;
      tmp->next = list;
      while(tmp2 != NULL)
	{
	  list= tmp;
	  tmp = tmp2;
	  tmp2 = tmp2->next;
	  tmp->next = list;
	}
      *begin_list = tmp;
    }
 
}

int main()
{
  t_list *list= NULL;
  list  = add_link(list,"yo");
  list  = add_link(list,"tu");
  list  = add_link(list,"vas");
  list = add_link(list,"bien");

  print_list(list);
  ft_list_reverse(&list);
  print_list(list);
  printf("\n");

  t_list *list1 = NULL;
  list1  = add_link(list1,"1");
  list1  = add_link(list1,"2");
  list1  = add_link(list1,"3");
  list1 = add_link(list1,"4");

  print_list(list1);
  ft_list_reverse(&list1); 
  print_list(list1);
  printf("\n");

  t_list *list2= NULL;
  list2  = add_link(list2,"1");
  list2  = add_link(list2,"2");
  list2  = add_link(list2,"3");
  list2 = add_link(list2,"4");

  print_list(list2);
  ft_list_reverse(&list2); 
  print_list(list2);

  
}
