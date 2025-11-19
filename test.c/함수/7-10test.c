// 문제 10. 짝수면 1, 홀수면 0: isEven(int n)
#include <stdio.h>

int isEven(int n) {
  if (n %2 == 0)
    return 1;
  else
    return 0;
}

int main(void) {
  printf("%d\n", isEven(4));  // 1
  printf("%d\n", isEven(7));  // 0
  return 0;
}