#include <stdio.h>

void ft_putchar(char str);

int lenght(char *str)
{
  int res = 0;
  int i = 0;
  while(str[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}

int cmp(char *s1, char *s2)
{
  int i = 0;
  int len1 = lenght(s1);
  int tmp1;
  int tmp2;
  while(i <len1)
    {
      tmp1 = s1[i]+'0';
      tmp2 = s2[i]+'0';
      if(tmp1 > tmp2)
	{
	  return (tmp1-tmp2);
	}
      else if (tmp2 > tmp1)
	{
	  return (tmp1-tmp2);
	}
      else
	{
	  i+=1;
	}
    }
  if(i == len1)
    {
      return 0;
    }
}

char    *strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
	  dest[i] = src[i];
	  i++;
	}
	dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}


int main (int argc, char **argv)
{
  int  	i;
  int k;
  int j;
  int j_len = 0;
  char	temp[10000] = {0};

  i = 1;

  while (i < argc - 1)

    {

      if (cmp(argv[i], argv[i + i]) > 0)

	{

	  strcpy(temp, argv[i + 1]);

	  strcpy(argv[i + 1], argv[i]);


	  strcpy(argv[i], temp);

	  i = 1;

	}

      else
	{
	  i+=1;
	}
    }

  for(k= 1; k < argc; k++ )
    {
      j_len = lenght(argv[k]);
      for(j= 0; j < j_len ; j++ )
	{
	  ft_putchar(argv[k][j]);
	}

      ft_putchar('\n');
    }
  
  return 0;
}



/* CORRECTION : ELLE EST MARCHE MEME PAS !!
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

char    *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	int		i;
	char	temp[10000] = {0};

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + i]) > 0)
		{
			ft_strcpy(temp, argv[i + 1]);
			ft_strcpy(argv[i + 1], argv[i]);
			ft_strcpy(argv[i], temp);
			i = 1;
		}
		else
			i++;
	}

	return (0);
}
*/
