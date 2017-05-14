#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char s[] = "150", t[] = "abc";
  int a, c;
  float b, d;
  printf("%s\n", s);
  a = atoi(s);
  printf("%d\n", a);
  b = atof(s);
  printf("%f\n", b);
  printf("%s\n", t);
  c = atoi(t);
  printf("%d\n", c);
  d = atof(t);
  printf("%f\n", d);
  return(0);
}
