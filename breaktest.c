#include <stdio.h>

int main(int argc, char **argv){
  int i;
  char c;
  double d;
  float f;
  printf("int�^�̃f�[�^����͂��ĉ������B\n" );
  scanf("%d", &i);
  c = (char) i;
  printf("%d ��char�^�ɒ����� %c �ƂȂ�܂��B\n", i, c);
  printf("����double�^�̃f�[�^����͂��Ă��������B\n");
  scanf("%lf", &d);
  f = (float) d;
  printf("%0.10f ��float�^�ɒ����� %0.10f �ƂȂ�܂��B\n", d, f);
  return 0;
}
