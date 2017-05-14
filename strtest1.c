#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
  char s[100];
  strcpy(s, "123456789");
  printf("%s\n", s);
  s[3] = '\n';
  printf("%s\n", s);
  return (0);
}
