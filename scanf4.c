#include <stdio.h>

int main(int argc, char **argv)
{
  int a;
  char s[15];
  printf("”‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢. \n" );
  fgets(s, sizeof(s), stdin);
  printf("“ü—Í‚³‚ê‚½”‚Í %d ‚Å‚·. \n", atoi(s));

  return (0);
}
