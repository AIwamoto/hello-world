#include <stdio.h>

int main (int argc, char **argv)
{
  printf("char�^ : %d�o�C�g\n", sizeof(char));
  printf("unsigned char�^ : %d�o�C�g\n", sizeof(unsigned char));
  printf("signed chaar�^ : %d�o�C�g\n", sizeof(signed char));
  printf("int�^ : %d�o�C�g\n", sizeof(int));
  printf("unsigned int�^ : %d�o�C�g\n", sizeof(unsigned int));
  printf("short�^ : %d�o�C�g\n", sizeof(short));
  printf("unsigned short�^ : %d�o�C�g\n", sizeof(unsigned short));
  printf("long�^ : %d�o�C�g\n", sizeof(long));
  printf("unsigned long�^ : %d�o�C�g\n", sizeof(unsigned long));
  printf("long long�^ : %d�o�C�g\n", sizeof(long long));
  printf("unsigned long long�^ : %d�o�C�g\n", sizeof(unsigned long long));
  printf("float�^ : %d�o�C�g\n", sizeof(float));
  printf("double�^ : %d�o�C�g\n", sizeof(double));
  printf("long double�^ : %d�o�C�g\n", sizeof(long double));
  return(0);
}
