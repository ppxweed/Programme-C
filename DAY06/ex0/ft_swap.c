#include <stdio.h>


void ft_swap(int *a, int*b)
{
  printf("les valeurs de bases sont : %i et %i \n", *a, *b);
  int tmp =0;
  tmp = *a;
  *a = *b;
  *b = tmp;
  printf("les nouvelles valeurs sont : %i et %i", *a, *b);
  return;
}





