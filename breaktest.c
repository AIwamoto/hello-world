#include <stdio.h>

int main(int argc, char **argv){
  int i;
  char c;
  double d;
  float f;
  printf("int型のデータを入力して下さい。\n" );
  scanf("%d", &i);
  c = (char) i;
  printf("char型に直すと %c となります。\n", c);
  printf("次にdouble型のデータを入力してください。\n");
  scanf("%lf", &d);
  f = (float) d;
  printf("float型に直すと %f となります。\n", f);
  return 0;
}
