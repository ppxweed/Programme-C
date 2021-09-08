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


void ft_list_sort(t_list **begin_list, int(*cmp)())
{
  t_list* list = NULL;
  t_list * tmp = NULL;
  t_list * tmp2 = NULL;
  t_list * tmp3 = NULL;
  tmp3 = *begin_list;
  if(*begin_list != NULL)
    {
      while(tmp3 != NULL)
	{
	  for(*begin_list; *begin_list != NULL; *begin_list = *begin_list->next)
	    {
	      if(cmp(tmp3->data,*begin_list->next->data) == 1) //Si pas trié
		{
		  tmp->data = tmp3->data;
		  tmp2->data = *begin_list->next->data;
		  list->next = tmp;
		  list = list->next;
		  list->next = tmp2;
		  list = list->next;
		}
	      else
		{
		  list->data = *begin_list->next->data;
		  list = list->next;
		  list->data = tmp3->data;
		  list = list->next;
		}
	    }
	  tmp3 = tmp3->next;
	}
    }
  *begin_list = list;
}

int *compare()
{
  if(????)
    return 1;
  return 0;
}


int main()
{
  t_list *list= NULL;
  list = add_link(list,"1");
  list = add_link(list,"2");
  list = add_link(list,"4");
  list = add_link(list,"0");

  ft_list_sort(&list);
  print_list(list);

  t_list *list1= NULL;
  list1 = add_link(list1,"1");
  list1 = add_link(list1,"2");
  list1 = add_link(list1,"3");
  list1 = add_link(list1,"4");

  ft_list_sort(&list1);
  print_list(list1);

  t_list *list2= NULL;
  list2 = add_link(list2,"10");
  list2 = add_link(list2,"2");
  list2 = add_link(list2,"33");
  list2 = add_link(list2,"4");

  ft_list_sort(&list1);
  print_list(list1);
  

  return 0;
}
