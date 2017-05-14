#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
  char s[30], t[30];
  int a, b;



  strcpy(s, "zou");
  strcpy(t, "dazou");


  printf("s = %s\n", s);
  printf("t = %s\n", t);


  a = strlen(s);
  printf("s ‚Ì’·‚³ = %d\n", a);


  b = strcmp(s, t);
  printf("strcmp ‚ÌŒ‹‰Ê = %d\n", b);


  strcat(s, t);
  printf("s = %s\n", s);
  a = strlen(s);
  printf("s ‚Ì’·‚³ = %d\n", a);

  return(0);
}
