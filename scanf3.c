#include <stdio.h>

int main(int argc, char **argv)
{
  int a, b;
  char s[100];
  while (1)
  {
    printf("数を入れてください. \n" );
    b = scanf("%d\n", &a);
    if (b == 1) break;
    scanf("%s", s);
  }
  printf("入力された数は %d です. \n", a);
  return(0);
}
