
int ft_any(char **tab , void(*f)(char*))
{
  int i = 0;
  while(tab[i][0] != '\0')
    {
      if(f(tab[i]) == 1)
	{
	  return 1;
	}
      else
	{
	  i++;
	}
    }
  return 0;
}
