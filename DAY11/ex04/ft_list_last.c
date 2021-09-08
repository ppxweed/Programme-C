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



int ft_putchar(char* c)
{
  write(1,&c,1);
}

t_list *ft_list_last(t_list *begin_list)
{
  t_list* list;
  list = begin_list;
  if(list != NULL)
    {
      while(list->next != NULL)
	{
	  list= list->next;
	}
      return list;
    }
  return begin_list;
}
void print_list(t_list *list)
{
  while(list)
    {
      ft_putchar(list->data); //ft_putchar qui fait tout c'est possible ??
      printf("%s\n", list->data);
      list = list->next;
    }
}


int main()
{
  t_list *res = NULL;
  t_list *list =NULL;
  list = add_link(list, "salut");
  list = add_link(list,"bonjour");
  list = add_link(list,"12234");
  res = ft_list_last(list);
  print_list(res);
  
  t_list *res1= NULL;
  t_list *list1 =NULL;
  list1 = add_link(list1, "");
  list1 = add_link(list1, "salut");
  list1 = add_link(list1,"bonjour");
  list1 = add_link(list1,"12234");
  res1 = ft_list_last(list1);
  print_list(res1);

  t_list *res2= NULL;
  t_list *list2 =NULL;
  list2 = add_link(list2,"v");
  list2 = add_link(list2, "salut");
  list2 = add_link(list2,"bonjour");
  list2 = add_link(list2,"12234");
  res2 = ft_list_last(list2);
  print_list(res2);

  t_list *res3 = NULL;
  t_list *list3 =NULL;
  res3 = ft_list_last(list3);
  print_list(res3);

  return 0;
}


