#include <stdio.h>

int main (int argc, char **argv)
{
  float r = 0.0, l = 0.0, s = 0.0, pi = 0.0;
  pi = 3.1415;
  printf("���a�i���j����͂��Ă�������\n");
  scanf("%f", &r);
  l = 2 * pi * r;
  s = pi * r * r;
  printf("�~�� : %7.5f\n�ʐ� : %7.5f\n", l, s);
  return(0);
}
