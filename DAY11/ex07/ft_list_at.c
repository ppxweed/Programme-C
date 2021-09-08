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

  if(list == NULL)
    {
      printf("NULL\n");
    }
  else
    {
      printf("%s\n", list->data);
    }
  
 
}


t_list * ft_list_at(t_list *begin_list, unsigned int a)
{
  unsigned int i = 0;
  if(begin_list != NULL)
    {
      while(begin_list->next != NULL)
	{
	  if(i == a)
	    {
	      return begin_list;
	    }
	  begin_list = begin_list->next;
	  i++;
	}
    }
  if(a > i)
    {
      return NULL; //PRObleme d'affichage pour les NULL
    }
  return begin_list;
  
}

int main()
{
  t_list *list;
  t_list *res;
  list = add_link(list, "gogo");
  list = add_link(list, "gigi");
  list = add_link(list, "gUgu");
  list = add_link(list, "gygy");
  res = ft_list_at(list,3);
  print_list(res);

  t_list *list1;
  t_list *res1;
  list1 = add_link(list1, "gogo");
  list1 = add_link(list1, "gigi");
  list1 = add_link(list1, "gUgu");
  list1 = add_link(list1, "gygy");
  res1 = ft_list_at(list1,5);
  print_list(res1);


  t_list *list2 = NULL;
  t_list *res2;
  res2 = ft_list_at(list2,0);
  print_list(res2);
  

  return 0;
}
