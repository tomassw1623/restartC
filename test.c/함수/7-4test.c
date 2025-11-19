// 문제 4. 절댓값: absolute(int x)
#include <stdio.h>

int absolute(int x) {
  if (x < 0)
  return -x;
  else
  return x;
}

int main(void) {
  printf("%d\n", absolute(5));    // 5
  printf("%d\n", absolute(-7));   // 7
  return 0;
}