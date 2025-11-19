// 문제 3. 문자 3번 출력: print3(char c)
#include <stdio.h>

void print3(char c) {
  for (int i = 0; i < 3; i++) {
    printf("%c", c);
  }
  printf("\n");
}

int main(void) {
  print3('A');
  return 0;
}