// 문제 9. Hello를 n번 출력: printHello(int n)
#include <stdio.h>

void printHello(int n) {
  for (int i = 0; i < n; i++) {
    printf("Hello\n");
  }
}

int main(void) {
  printHello(3);
  return 0;
}