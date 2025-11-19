// 문제 2. add(int a, int b)
#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int main(void) {
  int result = add(3, 5);
  printf("%d\n", result);
  return 0;
}