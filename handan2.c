#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char month[2]={'\0'}, day[2]={'\0'}, kibun[3]={'\0'};
  int m, d, k;
  float a;

  while (1){
    printf("�a�����͉����ł����H\n" );
    scanf("%[^\n]", month);
    m = atoi(month); //������^ �� �����^
    if (month[0] == '\0'){
      exit(0); //�����͂ŋ����I��
    }
    else if (m == 0){
      // �����łȂ���΍Ăѓ��͂�
    }
    else{
      break; //�����ł���ΌJ��Ԃ��I��
    }
  }
  while (1){
    printf("�a�����͉����ł����H\n" );
    scanf("%*c%[^\n]", day);
    d = atoi(day);
    if (day[0] == '\0'){
      exit(0);
    }
    else if (d == 0) {
    }
    else{
      break;
    }
  }
  while (1)
  {
    printf("�����̐H�~�� 0~100 �̐��l�ŕ\\���ƁH\n" );
    scanf("%*c%[^\n]", kibun);
    k = atoi(kibun);
    if (kibun[0] == '\0'){
      exit(0);
    }
    else if(k == 0){
    }
    else{
      break;
    }
  }
// �v�Z�����ʂ�\��
  a = (float)(m + d + k - 2) / 141.0 * 100.0;
  printf("���Ȃ��͉䖝���Ȃ��� %f �p�[�Z���g����܂��I\n", a);
  return 0;
}
