void ft_foreach(int *tab, int lenght, void(f*)(int))
{
  for(int i = 0; i <lenght ; i ++)
    {
      f(tab[i]);
    }
}
