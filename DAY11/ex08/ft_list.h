#ifndef _FT_list_H_
#define _FT_list_H_

typedef struct s_list
{
  char *data;
  struct s_list * next;
}
t_list;

t_list *add_link(t_list *list, char*data);
void print_list(t_list *list);

#endif
