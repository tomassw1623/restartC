// 문제 6. 두 수 중 큰 값: max(int a, int b)
#include <stdio.h>

int max2(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}

int main(void) {
  printf("%d\n", max2(3, 10));  // 10
  printf("%d\n", max2(7, 2));   // 7
  return 0;
}