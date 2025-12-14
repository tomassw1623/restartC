// 문제 10. 짝수면 1, 홀수면 0: isEven(int n)
#include <stdio.h>

// n이 짝수면 1, 홀수면 0을 돌려주는 함수
int isEven(int n) {
  // %2 → 2로 나누었을 때 나머지가 0이면 짝수
  if (n % 2 == 0)
    return 1; // 짝수
  else
    return 0; // 홀수
}

int main(void) {
  printf("%d\n", isEven(4)); // 짝수 → 1
  printf("%d\n", isEven(7)); // 홀수 → 0
  return 0;
}
