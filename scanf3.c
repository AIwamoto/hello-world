#include <stdio.h>

int main(int argc, char **argv)
{
  int a, b;
  char s[100];
  while (1)
  {
    printf("�������Ă�������. \n" );
    b = scanf("%d\n", &a);
    if (b == 1) break;
    scanf("%s", s);
  }
  printf("���͂��ꂽ���� %d �ł�. \n", a);
  return(0);
}
