#include <stdio.h>

int main(int argc, char **argv){
  int i;
  char c;
  double d;
  float f;
  printf("int�^�̃f�[�^����͂��ĉ������B\n" );
  scanf("%d", &i);
  c = (char) i;
  printf("char�^�ɒ����� %c �ƂȂ�܂��B\n", c);
  printf("����double�^�̃f�[�^����͂��Ă��������B\n");
  scanf("%lf", &d);
  f = (float) d;
  printf("float�^�ɒ����� %f �ƂȂ�܂��B\n", f);
  return 0;
}
