#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
  char s[100];
  strcpy(s, "¡“ú‚Í‰J‚ª~‚è‚Ü‚·");
  printf("%s\n", s);
  printf("%c\n", s[4]);
  return(0);
}
