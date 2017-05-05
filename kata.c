#include <stdio.h>

int main (int argc, char **argv)
{
  printf("char型 : %dバイト\n", sizeof(char));
  printf("unsigned char型 : %dバイト\n", sizeof(unsigned char));
  printf("signed chaar型 : %dバイト\n", sizeof(signed char));
  printf("int型 : %dバイト\n", sizeof(int));
  printf("unsigned int型 : %dバイト\n", sizeof(unsigned int));
  printf("short型 : %dバイト\n", sizeof(short));
  printf("unsigned short型 : %dバイト\n", sizeof(unsigned short));
  printf("long型 : %dバイト\n", sizeof(long));
  printf("unsigned long型 : %dバイト\n", sizeof(unsigned long));
  printf("long long型 : %dバイト\n", sizeof(long long));
  printf("unsigned long long型 : %dバイト\n", sizeof(unsigned long long));
  printf("float型 : %dバイト\n", sizeof(float));
  printf("double型 : %dバイト\n", sizeof(double));
  printf("long double型 : %dバイト\n", sizeof(long double));
  return(0);
}
