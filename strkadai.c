#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  char s[30], t[30];
  int a, b, i;

  for (i = 0 ; i < 10; i++)
  {
    scanf("%s", s);
    scanf("%s", t);
    a = strcmp(s, t);
    b = strcmp(t, s);
    printf("%sと%sとのstrcmp = %d\n", s, t, a);
    printf("%sと%sとのstrcmp = %d\n", t, s, b);
  }
  return 0;
}
