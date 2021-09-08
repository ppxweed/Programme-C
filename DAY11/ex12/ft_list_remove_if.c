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

t_list* ft_list_remove_if(t_list** begin_list, void* data_ref, int(*cmp)())
{
  t_list *list= NULL;
  t_list *tmp= NULL;
  list = *begin_list;
  if(list != NULL)
    {
      while(list->next != NULL)
	{
	  if(*cmp(list->data,data_ref) != 0)
	    {
	      tmp = list->data;
	      tmp = tmp->next;
	    }
	  else
	    {
	      list = list->next;
	    }
	 
	}
      *begin_list = tmp;
    }
  return *begin_list;
}

int *cmp()
{
  return (???);
}

int main()
{
  t_list *list= NULL;
  t_list *res= NULL;
  list =  add_link(list,"vas");
  list =  add_link(list,"tu");
  list = add_link(list,"bien");
  res = ft_remove_if(list,"bien",cmp);
  print_list(res);


  t_list *list1= NULL;
  t_list *res1= NULL;
  list1 =  add_link(list1,"vas");
  list1 =  add_link(list1,"tu");
  list1 = add_link(list1,"bien");
  res1 = ft_remove_if(list1,"",cmp);
  print_list(res1);

  t_list *list2= NULL;
  t_list *res2 = NULL;
  list2 =  add_link(list2,"vas");
  list2 =  add_link(list2,"tu");
  list2 = add_link(list2,"bien");
  res2 = ft_removre_if(list2,"!!",cmp);
  print_list(res2);

  t_list *list3= NULL;
  t_list *res3 = NULL;
  res3 = ft_remove_if(list3,"vas",cmp);
  print_list(res3);
}
