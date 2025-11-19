// 문제 7. 0을 반환하는 함수 zero(void)
#include <stdio.h>

int zero(void) {
  return 0;
}

int main(void) {
  int z = zero();
  printf("%d\n", z);
  return 0;
}