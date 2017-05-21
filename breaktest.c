#include <stdio.h>

int main(int argc, char **argv){
  int i;
  char c;
  double d;
  float f;
  printf("int型のデータを入力して下さい。\n" );
  scanf("%d", &i);
  c = (char) i;
  printf("%d をchar型に直すと %c となります。\n", i, c);
  printf("次にdouble型のデータを入力してください。\n");
  scanf("%lf", &d);
  f = (float) d;
  printf("%0.10f をfloat型に直すと %0.10f となります。\n", d, f);
  return 0;
}
