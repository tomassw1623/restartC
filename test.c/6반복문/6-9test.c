// 문제 9. 1~100 사이 3과 5의 공배수(=15의 배수) 출력
#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 100; i++) {
    if (i % 15 ==0) {
      printf("%d", i);
    }
  }
  return 0;
}