#include <stdio.h>

int main(int argc, char **argv)
{
  int m, d, k, b;
  float a;
  char s[100];
  while (1)
  {
    printf("�a�����͉����ł����H\n" );
    b = scanf("%d", &m);
    if(b == 1) break;
    scanf("%s", s);
  }
  while (1)
  {
    printf("�a�����͉����ł����H\n" );
    b = scanf("%d", &d);
    if(b == 1) break;
    scanf("%s", s);
  }
  while (1)
  {
    printf("�����̋C���� 0~100 �̐��l�ŕ\\���ƁH\n" );
    b = scanf("%d", &k);
    if(b == 1) break;
    scanf("%s", s);
  }
  a = (float)(m + d + k - 2) / 141.0 * 100.0;
  printf("���Ȃ��̂�������₳��x�� %f �p�[�Z���g�ł��I\n", a);
  return 0;
}
