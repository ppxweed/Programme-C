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

int ft_list_size(t_list *begin_list)
{
  int res = 0;
  while(begin_list)
    {
      begin_list = begin_list->next;
      res++;
    }
  return res;
}

int main()
{
  int res = 0;
  t_list *list =NULL;
  list = add_link(list, "salut");
  list = add_link(list,"bonjour");

  res = ft_list_size(list);
  printf("The result is %d \n", res);

  int res1 = 0;
  t_list *list1 =NULL;
  list1 = add_link(list1, "");
  res1 = ft_list_size(list1);
  printf("The result is %d \n", res1);

  int res2 = 0;
  t_list *list2 =NULL;
  res2 = ft_list_size(list2);
  printf("The result is %d \n", res2);


  int res3 = 0;
  t_list *list3 =NULL;
  list3 = add_link(list3, "124324TFSD32ETRT");
  res3 = ft_list_size(list3);
  printf("The result is %d \n", res3);

  return 0;
}
