#include <stdio.h>

int main(int argc, char **argv)
{
  int a;
  char s[15];
  printf("�������Ă�������. \n" );
  fgets(s, sizeof(s), stdin);
  printf("���͂��ꂽ���� %d �ł�. \n", atoi(s));

  return (0);
}
