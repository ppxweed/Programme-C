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


void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
  t_list *list = NULL ;
  list =*begin_list1;
  if(list != NULL && begin_list2 != NULL)
    {
      while(list->next != NULL)
	{
	  list = list->next;
	}
      list->next = begin_list2;
      *begin_list1 = list;
    }
  else
    {
      if(begin_list2 != NULL)
	{
	  *begin_list1 = begin_list2;
	} 
    }
}


int main()
{
  t_list *l1 = NULL;
  t_list *l2 = NULL;
  l1 = add_link(l1,"tout");
  l1 = add_link(l1,"vas");
  l1 = add_link(l1,"tu");
  l2 = add_link(l2," ?!");
  l2 = add_link(l2,"bien");

  ft_list_merge(&l1,l2);
  print_list(l1);
  printf("\n");

  t_list *l3 = NULL;
  t_list *l4 = NULL;
  l3 = add_link(l3,"vas");
  l3 = add_link(l3,"tu");
  ft_list_merge(&l3,l4);
  print_list(l3);
  printf("\n");
  
  t_list *l5 = NULL;
  t_list *l6 = NULL;
  l6 = add_link(l6," ?!");
  l6 = add_link(l6,"bien");


  ft_list_merge(&l5,l6);
  print_list(l5);

  return 0;
  
}
