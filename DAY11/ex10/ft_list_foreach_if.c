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
void ft_list_foreach_if(t_list *begin_list, void(*f)(void*), void* data_ref, int (*cmp)())
{
  t_list *list_ptr = NULL;
  list_ptr= begin_list;
  if(list_ptr != NULL)
    {
      while(list_ptr->next != NULL)
	{
	  if((*cmp)(list_ptr->data,data_ref)==0)
	    {
	      (*f)(list_ptr->data);
	    }
	  list_ptr= list_ptr->next;
	}
    }
  
}


void *add(void *data)
{
  data = "lol";
}

int *compare()
{
  int res = 0;
  if(data != data_ref) //???????????????
    {
      return 1;
    }
  
  return res;
}


int main()
{
  t_list *list= NULL;
  list = add_link(list, "vas");
  list = add_link(list, "tu");
  print_list(list);
  ft_list_foreach_if(list,add,"vas",compare);
  print_list(list);
  return 0;
}
