#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  char s[5], t[] = "abcdefg";
  strcpy(s, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
  printf("%s\n", s);
  strcat(t, "hijk");
  printf("%s\n", t);
  return(0);
}
