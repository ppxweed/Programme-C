
int ft_count_if(char **tab, int(*f)(char*))
{
  int i = 0;
  int res = 0;
  while(tab[i][0] != '\0')
    {
      if(f(tab[i])== 1)
	{
	  res++;  
	}
      i++;
    }
  return res;
}


int count (char* tab)
{
  int i = 0;
  int res = 0;
  while(tab[i] != '\0')
    {
      if(tab[i] == ' ')
	{
	  return 0;
	}
      i++;
    }
  return 1;

}

int main()
{
  int len = 5;
  char *tab="salut toi";
  char **test = &tab;
  int res = ft_count_if(test,count);
  return res;
}
