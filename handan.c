#include <stdio.h>

int main(int argc, char **argv)
{
  int m, d, k, b;
  float a;
  char s[100];
  while (1)
  {
    printf("誕生日は何月ですか？\n" );
    b = scanf("%d", &m);
    if(b == 1) break;
    scanf("%s", s);
  }
  while (1)
  {
    printf("誕生日は何日ですか？\n" );
    b = scanf("%d", &d);
    if(b == 1) break;
    scanf("%s", s);
  }
  while (1)
  {
    printf("今日の気分を 0~100 の数値で表\すと？\n" );
    b = scanf("%d", &k);
    if(b == 1) break;
    scanf("%s", s);
  }
  a = (float)(m + d + k - 2) / 141.0 * 100.0;
  printf("あなたのうっかりやさん度は %f パーセントです！\n", a);
  return 0;
}
