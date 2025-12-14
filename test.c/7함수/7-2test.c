// 문제 2. add(int a, int b)
#include <stdio.h>

// a와 b 두 숫자를 더한 결과를 돌려주는 함수
int add(int a, int b) {
  return a + b; // a + b 계산해서 돌려줌
}

int main(void) {
  // add(3, 5)는 3 + 5 = 8을 돌려준다
  int result = add(3, 5);

  // 계산된 결과 출력 (8)
  printf("%d\n", result);

  return 0;
}
