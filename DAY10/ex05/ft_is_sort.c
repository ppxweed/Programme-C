
int ft_is_sort(int *tab, int lenght, int(*f)(int, int))
{
  int i = 0;
  int tmp = 0;
  while(i <= lenght-1)
    {
      if(f(tab(i],tab[i+1]) < 0)
	{
	  return 0;
	}
      else
	{
	  i++;
	}
    }
  return 1;

}
