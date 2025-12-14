// 문제 6. 두 수 중 큰 값: max(int a, int b)
#include <stdio.h>

// a와 b 중 더 큰 숫자를 돌려주는 함수
int max2(int a, int b) {
  if (a > b)
    return a; // a가 더 크면 a
  else
    return b; // 아니면 b
}

int main(void) {
  printf("%d\n", max2(3, 10)); // 10
  printf("%d\n", max2(7, 2));  // 7
  return 0;
}
