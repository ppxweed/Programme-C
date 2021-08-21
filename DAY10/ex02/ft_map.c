
int *ft_map(int *tap, int lenght , void(*f)(int))
{
  int *map = NULL;
  map = (int *) malloc(sizeof(int*)*lenght);
  for(int  i = 0; i < lenght ; i++)
    {
      map[i]= f(tab[i]);
    }
  map[i] = '\0';
  return map;
}
