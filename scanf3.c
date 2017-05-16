#include <stdio.h>

int main(int argc, char **argv)
{
  int a, b;
  char s[100];
  while (1)
  {
    printf("”‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢. \n" );
    b = scanf("%d\n", &a);
    if (b == 1) break;
    scanf("%s", s);
  }
  printf("“ü—Í‚³‚ê‚½”‚Í %d ‚Å‚·. \n", a);
  return(0);
}
