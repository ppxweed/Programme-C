#include <stdio.h>


void ft_ultimate_ft(int *********nbr)
{
  int ecole;
  int ********nbr8;
  int *******nbr7;
  int ******nbr6;
  int *****nbr5;
  int ****nbr4;
  int ***nbr3;
  int **nbr2;
  int *nbr1;
  ecole =42;
  nbr1 = &ecole;
  nbr2 = &nbr1; 
  nbr3 = &nbr2; 
  nbr4 = &nbr3;
  nbr5 = &nbr4; 
  nbr6 = &nbr5; 
  nbr7 = &nbr6; 
  nbr8 = &nbr7; 
  nbr = &nbr8;
  printf("%i", *********nbr);
  return;
}

int main ()
{
  int *********test;
  int test10 = 2345;
  int ********test8;
  int *******test7;
  int ******test6;
  int *****test5;
  int ****test4;
  int ***test3;
  int **test2;
  int *test1;
  test1 = &test10;
  test2 = &test1; 
  test3 = &test2; 
  test4 = &test3;
  test5 = &test4; 
  test6 = &test5; 
  test7 = &test6; 
  test8 = &test7; 
  test = &test8;
  ft_ultimate_ft(test);
  printf("\n");
  return (0) ;
}
