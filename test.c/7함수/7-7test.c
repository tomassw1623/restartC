// 문제 7. 0을 반환하는 함수 zero(void)
#include <stdio.h>

// 아무 일도 하지 않고 그냥 0을 돌려주는 함수
int zero(void) {
  return 0;
}

int main(void) {
  int z = zero(); // z에 0이 들어감
  printf("%d\n", z);
  return 0;
}
