#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>


/////////////////////////////////////////////////////////////////
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
  //////////////////////////////////////////////////////////////////





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


void print_list(t_list *list)
{
  while(list)
    {
      printf("%s", list->data);
      list = list->next;
    }
}

void ft_list_push_back(t_list **begin_list, void *data)
{
  t_list *list;
  list = *begin_list;
  if(list)
    {
      while(list->next)
	{
	  list= list->next;
	}
      list->next = ft_create_elem(data);
    }
  else
    {
      list->next = ft_create_elem(data);
    }
}

int main()
{
  
  
  t_list *list = NULL;
  list = add_link(list,"salut ");
  list = add_link(list,"hello ");
  list = add_link(list,"monsieur ");
  ft_list_push_back(&list,"toto\n");
  print_list(list);

  t_list *list1 = NULL;
  list1 = add_link(list1,"fr\n");
  list1 = add_link(list1,"en\n");
  list1 = add_link(list1,"jap\n");
  ft_list_push_back(&list1," V   \n");
  print_list(list1);

   t_list *list2 = NULL;
  list2 = add_link(list2,"Hollande\n");
  list2 = add_link(list2,"Chine\n");
  ft_list_push_back(&list2,"v");
  print_list(list2);   //???????????????????????????????????????
  
  t_list *list3 = NULL;
  ft_list_push_back(&list3,"diuiop$asQSQM\n");
  print_list(list3);

  t_list *list4 = NULL;
  ft_list_push_back(&list4,"");
  print_list(list4);

  t_list *list5 = NULL;
  ft_list_push_back(&list5,"");
  print_list(list4);
  
  return 0;
}
