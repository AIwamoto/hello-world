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
    m = atoi(month); //文字列型 → 整数型
    if (month[0] == '\0'){
      exit(0); //未入力で強制終了
    }
    else if (m == 0){
      // 数字でなければ再び入力へ
    }
    else{
      break; //数字であれば繰り返し終了
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
    printf("今日の食欲を 0~100 の数値で表\すと？\n" );
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
// 計算＆結果を表示
  a = (float)(m + d + k - 2) / 141.0 * 100.0;
  printf("あなたは我慢しないと %f パーセント太ります！\n", a);
  return 0;
}
