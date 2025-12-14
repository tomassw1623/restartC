// 문제 9. Hello를 n번 출력: printHello(int n)
#include <stdio.h>

// Hello를 n번 출력하는 함수
void printHello(int n) {
  // n번 반복
  for (int i = 0; i < n; i++) {
    printf("Hello\n"); // Hello 한 줄 출력
  }
}

int main(void) {
  printHello(3); // Hello를 3번 출력
  return 0;
}
