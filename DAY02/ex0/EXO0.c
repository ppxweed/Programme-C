#include <stdio.h>


void print_alphabet()
{
  char res ='a';

  while(res <= 'z')
    {
	printf("%c",res);
	res+=1;
    }
}

int main ()
{
  print_alphabet();
  printf("\n");
  return (0) ;
}
