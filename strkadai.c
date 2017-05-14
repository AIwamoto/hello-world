#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  char a[30], b[30];
  int A, B, C, D, E, F, G, H;
  strcpy(a, "SiM");
  strcpy(b,"SUICIDE SILENCE");
  A = strcmp(a, b);
  printf("strcmp‚ÌŒ‹‰Ê = %d\n", A);
  return 0;
}
