#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char month[2]={'\0'}, day[2]={'\0'}, kibun[3]={'\0'};
  int m, d, k;
  float a;

  while (1){
    printf("誕生日は何月ですか？\n" );
    scanf("%[^\n]", month);
    m = atoi(month);
    if (month[0] == '\0'){
      exit(0);
    }
    else if (m == 0){
    }
    else{
      break;
    }
  }
  while (1){
    printf("誕生日は何日ですか？\n" );
    scanf("%*c%[^\n]", day);
    d = atoi(day);
    if (day[0] == '\0'){
      exit(0);
    }
    else if (d == 0) {
    }
    else{
      break;
    }
  }
  while (1)
  {
    printf("今日の気分を 0~100 の数値で表\すと？\n" );
    scanf("%*c%[^\n]", kibun);
    k = atoi(kibun);
    if (kibun[0] == '\0'){
      exit(0);
    }
    else if(k == 0){
    }
    else{
      break;
    }
  }

  a = (float)(m + d + k - 2) / 141.0 * 100.0;
  printf("あなたのうっかりやさん度は %f パーセントです！\n", a);
  return 0;
}
