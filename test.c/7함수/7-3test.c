// 문제 3. 문자 3번 출력: print3(char c)
#include <stdio.h>

// 글자 하나(c)를 3번 반복 출력하는 함수
void print3(char c) {
  // i가 0,1,2 → 총 3번 반복
  for (int i = 0; i < 3; i++) {
    printf("%c", c); // 글자 출력
  }
  printf("\n"); // 줄바꿈
}

int main(void) {
  // 'A'를 3번 출력 → AAA
  print3('A');
  return 0;
}
